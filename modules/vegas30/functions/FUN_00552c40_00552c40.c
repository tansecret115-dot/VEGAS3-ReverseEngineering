/* Module: vegas30.exe
   Function: FUN_00552c40
   Address: 00552c40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00552c40(HWND param_1,int param_2)

{
  HWND pHVar1;
  undefined4 *puVar2;
  int iVar3;
  int *unaff_EBX;
  int *unaff_EBP;
  int *piVar4;
  int *piVar5;
  UINT UVar6;
  WPARAM WVar7;
  WPARAM wParam;
  int *piVar8;
  LPARAM LVar9;
  undefined4 local_8;
  int *local_4;
  
  if (*(int *)(param_2 + 8) != 0) {
    LVar9 = 0;
    WVar7 = 0;
    UVar6 = 0x18b;
    local_8 = 0;
    local_4 = (int *)0x0;
    pHVar1 = GetDlgItem(param_1,0x46e);
    WVar7 = SendMessageA(pHVar1,UVar6,WVar7,LVar9);
    while (WVar7 != 0) {
      WVar7 = WVar7 - 1;
      LVar9 = 0;
      UVar6 = 0x199;
      wParam = WVar7;
      pHVar1 = GetDlgItem(param_1,0x46e);
      puVar2 = (undefined4 *)SendMessageA(pHVar1,UVar6,wParam,LVar9);
      if (puVar2 != (undefined4 *)0x0) {
        piVar8 = (int *)&DAT_0060ea68;
        iVar3 = (*(code *)**(undefined4 **)*puVar2)((undefined4 *)*puVar2,&DAT_0060ea68,&local_8);
        if (iVar3 == 0) {
          piVar5 = (int *)0x17;
          (**(code **)(*unaff_EBP + 0x60))(unaff_EBP,0x17,puVar2 + 0xb);
          piVar4 = (int *)0x40;
          (**(code **)(*piVar8 + 0x60))(piVar8,0x40,puVar2 + 0xc);
          (**(code **)(*piVar5 + 0x60))(piVar5,0x41,puVar2 + 0xd);
          (**(code **)(*piVar4 + 8))(piVar4);
        }
        iVar3 = (*(code *)**(undefined4 **)*puVar2)
                          ((undefined4 *)*puVar2,&DAT_0060ea78,&stack0xfffffff0);
        if (iVar3 == 0) {
          piVar8 = puVar2 + 0xb;
          (**(code **)(*local_4 + 0x84))(local_4,0x17);
          (**(code **)(*unaff_EBX + 0x84))(unaff_EBX,0x41,puVar2 + 0xd);
          (**(code **)(*piVar8 + 8))(piVar8);
        }
      }
    }
    *(undefined4 *)(param_2 + 8) = 0;
  }
  return;
}


