/* Module: vegas30k.dll
   Function: FUN_01048a60
   Address: 01048a60
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01048a60(int *param_1,LONG param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6)

{
  int *piVar1;
  LONG LVar2;
  int iVar3;
  int *unaff_EBX;
  undefined4 unaff_retaddr;
  int *piStack_28;
  undefined4 *puStack_24;
  LONG LStack_20;
  undefined4 uStack_10;
  HWND pHStack_c;
  undefined4 *puStack_8;
  undefined4 uStack_4;
  
  LVar2 = param_2;
  piVar1 = param_1;
  puStack_24 = &param_1;
  LStack_20 = param_2;
  piStack_28 = param_1;
  iVar3 = (**(code **)(*param_1 + 0x34))();
  if (iVar3 == 0) {
    iVar3 = (**(code **)*puStack_8)(puStack_8,&DAT_011dab80,&uStack_4);
    if (iVar3 != 0) {
      (**(code **)(*unaff_EBX + 8))(unaff_EBX);
      return iVar3;
    }
    iVar3 = FUN_0113f8e0(uStack_10);
    if (iVar3 == 0) {
      GetWindowRect(pHStack_c,(LPRECT)&piStack_28);
      iVar3 = (**(code **)(*unaff_EBX + 0x54))(unaff_EBX,pHStack_c,puStack_8);
    }
    else {
      iVar3 = FUN_0113f5d0(uStack_10,piVar1,LVar2,pHStack_c,puStack_8,uStack_4,unaff_retaddr,param_1
                           ,param_2,param_3,param_4,param_5,param_6);
    }
    (**(code **)(*unaff_EBX + 8))(unaff_EBX);
    (**(code **)(*unaff_EBX + 8))(unaff_EBX);
  }
  return iVar3;
}


