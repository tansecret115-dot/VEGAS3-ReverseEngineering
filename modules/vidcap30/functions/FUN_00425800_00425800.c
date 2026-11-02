/* Module: vidcap30.exe
   Function: FUN_00425800
   Address: 00425800
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00425800(int *param_1,LONG param_2,LONG param_3,uint param_4)

{
  int iVar1;
  POINT pt;
  POINT pt_00;
  POINT pt_01;
  BOOL BVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (((param_1[0x4e] & 4U) != 0) && ((param_1[3] & 0x10000000U) != 0)) {
    iVar1 = *param_1;
    if ((iVar1 == 1) || ((iVar1 == 4 || (iVar1 == 6)))) {
      pt_01.y = param_3;
      pt_01.x = param_2;
      BVar2 = PtInRect((RECT *)(param_1 + 0x5e),pt_01);
      if (BVar2 != 0) {
        uVar3 = param_4;
      }
    }
    else if (iVar1 == 5) {
      pt.y = param_3;
      pt.x = param_2;
      BVar2 = PtInRect((RECT *)(param_1 + 0x54),pt);
      if (BVar2 != 0) {
        uVar3 = FUN_00430170(param_1[0x7c],param_2,param_3);
        return uVar3 | param_4;
      }
    }
    else if (iVar1 == 3) {
      pt_00.y = param_3;
      pt_00.x = param_2;
      BVar2 = PtInRect((RECT *)(param_1 + 5),pt_00);
      if (BVar2 != 0) {
        return param_4;
      }
    }
  }
  return uVar3;
}


