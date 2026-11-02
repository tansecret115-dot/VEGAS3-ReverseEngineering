/* Module: vegas30.exe
   Function: FUN_004a7340
   Address: 004a7340
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004a7340(int param_1,int *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 *puVar7;
  int *piVar8;
  LONG *pLVar9;
  tagPOINT local_40;
  LONG local_38;
  LONG local_34;
  LONG local_30;
  LONG local_2c;
  undefined1 local_28 [40];
  
  piVar2 = param_2;
  if (param_2 != (int *)0x0) {
    local_40.x = *(LONG *)(param_1 + 0xa8);
    local_40.y = *(LONG *)(param_1 + 0xac);
    uVar1 = *(undefined4 *)(param_1 + 0xbc8);
    ClientToScreen(*(HWND *)(param_1 + 4),&local_40);
    local_34 = local_40.y;
    local_2c = local_40.y;
    local_38 = local_40.x;
    local_30 = local_40.x;
    _SfList_CreateExZ_32(&param_2,4,0x10,0x10,4,0,0,0);
    _SfLoadString_16(DAT_00647204,0x4fff,local_28,0x28);
    uVar5 = *(undefined4 *)(param_1 + 4);
    pLVar9 = &local_38;
    puVar7 = &LAB_004a74d0;
    piVar8 = param_2;
    uVar3 = _SfGetString_8(DAT_00647204,0x5000);
    iVar4 = FUN_00506e60(piVar2,0x22,local_28,uVar3,puVar7,piVar8,uVar5,pLVar9);
    if ((iVar4 != 0) && (iVar4 = *param_2, iVar4 != 0)) {
      _SfList_Sort_12(param_2,0,&LAB_004a7310);
      piVar8 = (int *)piVar2[0x15];
      if (piVar8 == (int *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *piVar8;
      }
      FUN_004e9f70(uVar1,0x31,0);
      if ((piVar8 == (int *)0x0) || (iVar6 == 0)) {
        if (piVar2[0x14] != 0) {
          FUN_004ea750(uVar1,piVar2,2,0);
          FUN_005c6b30(uVar1,piVar2,piVar2[0x14]);
        }
      }
      else {
        while (iVar4 = iVar4 + -1, -1 < iVar4) {
          uVar5 = FUN_005c6910(piVar2,*(undefined4 *)(param_2[1] * iVar4 + param_2[2]));
          FUN_004ea750(uVar1,piVar2,2,0);
          FUN_005c6b30(uVar1,piVar2,uVar5);
        }
        if (piVar2[0x15] != 0) {
          FUN_005c86c0(uVar1,piVar2,0);
        }
      }
      FUN_004eb2b0(uVar1);
      FUN_004ea040(uVar1,0);
    }
    _SfList_Destroy_4(param_2);
  }
  return;
}


