/* Module: wmfplug2.dll
   Function: FUN_00443050
   Address: 00443050
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00443050(int *param_1,LONG param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                 ,undefined4 param_6)

{
  int *piVar1;
  LONG LVar2;
  bool bVar3;
  uint uVar4;
  undefined3 extraout_var;
  int *unaff_EBX;
  undefined4 unaff_retaddr;
  int *piStack_28;
  int **ppiStack_24;
  LONG LStack_20;
  int *piStack_10;
  HWND pHStack_c;
  undefined4 *puStack_8;
  undefined4 uStack_4;
  
  LVar2 = param_2;
  piVar1 = param_1;
  ppiStack_24 = &param_1;
  LStack_20 = param_2;
  piStack_28 = param_1;
  uVar4 = (**(code **)(*param_1 + 0x34))();
  if (uVar4 == 0) {
    uVar4 = (**(code **)*puStack_8)(puStack_8,&DAT_004851c8,&uStack_4);
    if (uVar4 != 0) {
      (**(code **)(*unaff_EBX + 8))(unaff_EBX);
      return uVar4;
    }
    bVar3 = FUN_00476340(piStack_10);
    if (CONCAT31(extraout_var,bVar3) == 0) {
      GetWindowRect(pHStack_c,(LPRECT)&piStack_28);
      uVar4 = (**(code **)(*unaff_EBX + 0x54))(unaff_EBX,pHStack_c,puStack_8);
    }
    else {
      uVar4 = FUN_00476030(piStack_10,piVar1,LVar2,pHStack_c,puStack_8,uStack_4,unaff_retaddr,
                           param_1,param_2);
    }
    (**(code **)(*unaff_EBX + 8))(unaff_EBX);
    (**(code **)(*unaff_EBX + 8))(unaff_EBX);
  }
  return uVar4;
}


