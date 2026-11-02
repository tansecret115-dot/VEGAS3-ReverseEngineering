/* Module: vidcap30.exe
   Function: FUN_00473900
   Address: 00473900
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00473933) */

int FUN_00473900(uint param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  
  if ((param_1 == 0xfffffffe) && (param_2 == 0xffffffff)) {
    lVar2 = CONCAT44(param_4 - (uint)(param_3 == 0),param_3 + -1);
  }
  else {
    if ((param_1 & param_2) != 0xffffffff) {
      lVar2 = 0;
      goto LAB_00473927;
    }
    lVar2 = __alldiv(param_3,param_4,2,0);
  }
  if (((int)((ulonglong)lVar2 >> 0x20) < 1) && (lVar2 < 0)) {
    return 0;
  }
LAB_00473927:
  iVar1 = (int)lVar2;
  if (CONCAT44(param_4 - (uint)(param_3 == 0),param_3 + -1) < lVar2) {
    iVar1 = param_3 + -1;
  }
  return iVar1;
}


