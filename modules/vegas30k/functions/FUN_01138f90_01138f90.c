/* Module: vegas30k.dll
   Function: FUN_01138f90
   Address: 01138f90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01138f90(HWND param_1)

{
  undefined4 *puVar1;
  HWND pHVar2;
  int *piVar3;
  int iVar4;
  WPARAM unaff_ESI;
  UINT UVar5;
  WPARAM WVar6;
  LPARAM LVar7;
  
  puVar1 = (undefined4 *)GetWindowLongA(param_1,8);
  LVar7 = 0;
  WVar6 = 0;
  UVar5 = 0x188;
  pHVar2 = GetDlgItem(param_1,0x426);
  WVar6 = SendMessageA(pHVar2,UVar5,WVar6,LVar7);
  if (WVar6 != 0xffffffff) {
    LVar7 = 0;
    UVar5 = 0x199;
    pHVar2 = GetDlgItem(param_1,0x426);
    piVar3 = (int *)SendMessageA(pHVar2,UVar5,WVar6,LVar7);
    iVar4 = (**(code **)(*(int *)*puVar1 + 0x90))((int *)*puVar1,piVar3);
    if (iVar4 == 0) {
      (**(code **)(*piVar3 + 8))(piVar3);
      LVar7 = 0;
      UVar5 = 0x182;
      pHVar2 = GetDlgItem(param_1,0x426);
      SendMessageA(pHVar2,UVar5,unaff_ESI,LVar7);
      LVar7 = 0;
      WVar6 = 0;
      UVar5 = 0x186;
      pHVar2 = GetDlgItem(param_1,0x426);
      SendMessageA(pHVar2,UVar5,WVar6,LVar7);
      FUN_01138770(param_1);
      FUN_01138a00(param_1);
    }
  }
  return;
}


