/* Module: rmme3260.dll
   Function: FUN_6624bb00
   Address: 6624bb00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_6624bb00(uint *param_1,int param_2,uint *param_3,int *param_4,int *param_5)

{
  int iVar1;
  BOOL BVar2;
  
  if ((((((param_1 != (uint *)0x0) && (param_2 != 0)) && (param_3 != (uint *)0x0)) &&
       ((param_4 != (int *)0x0 && (param_5 != (int *)0x0)))) &&
      ((param_1[1] != 0 && (((*param_1 & 0x100) != 0 && ((*param_3 & 0x100) != 0)))))) &&
     ((*(byte *)(param_2 + 1) & 1) != 0)) {
    if ((*param_3 & 1) == 0) {
      BVar2 = FUN_6624bc00((int)param_1,*(int *)(param_2 + 0x438),param_3[0x10e],param_5,param_4);
      if (BVar2 != 0) {
        return 0;
      }
    }
    else {
      iVar1 = FUN_6624bbb0(param_1,*(int **)(param_2 + 0x438),param_3[0x10e],param_4,param_5);
      if (iVar1 == 0) {
        return 0;
      }
    }
    return 0x80004005;
  }
  return 0x80070057;
}


