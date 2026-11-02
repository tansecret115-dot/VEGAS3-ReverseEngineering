/* Module: vidcap30.exe
   Function: FUN_00447230
   Address: 00447230
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00447230(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *local_a14;
  undefined4 local_a10 [192];
  undefined1 local_710 [768];
  undefined1 local_410 [1040];
  
  if (param_1 != 0) {
    SendMessageA(*(HWND *)(param_1 + 0x88),0x602,0,(LPARAM)local_410);
    _SfSetMetricBinary_16(DAT_005ba29c,0x460,local_410,0x410);
    SendMessageA(*(HWND *)(param_1 + 0x88),0x606,0,(LPARAM)local_710);
    _SfSetMetricBinary_16(DAT_005ba29c,0x462,local_710,0x300);
    local_a14 = local_a10;
    iVar5 = 0;
    piVar4 = &DAT_005bc3dc;
    do {
      piVar1 = (int *)*piVar4;
      iVar2 = 0;
      iVar3 = *piVar1;
      puVar6 = local_a14;
      if (iVar3 < 1) {
LAB_004472f0:
        puVar6 = local_a10 + iVar2 + iVar5;
        for (iVar3 = 0x18 - iVar2; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar6 = 0xffffffff;
          puVar6 = puVar6 + 1;
        }
      }
      else {
        do {
          iVar2 = iVar2 + 1;
          *puVar6 = **(undefined4 **)(piVar1[2] + -4 + iVar2 * 4);
          puVar6 = puVar6 + 1;
        } while (iVar2 < iVar3);
        if (iVar2 < 0x18) goto LAB_004472f0;
      }
      piVar4 = piVar4 + 1;
      local_a14 = local_a14 + 0x18;
      iVar5 = iVar5 + 0x18;
    } while (piVar4 < &DAT_005bc3f4);
    _SfSetMetricBinary_16(DAT_005ba29c,0x463,local_a10,0x300);
    DestroyWindow(*(HWND *)(param_1 + 0x88));
    DestroyWindow(*(HWND *)(param_1 + 0x194));
  }
  puVar6 = &DAT_005bc3dc;
  do {
    _SfList_Destroy_4(*puVar6);
    puVar6 = puVar6 + 1;
  } while (puVar6 < &DAT_005bc3f4);
  return;
}


