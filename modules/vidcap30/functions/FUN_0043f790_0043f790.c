/* Module: vidcap30.exe
   Function: FUN_0043f790
   Address: 0043f790
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0043f790(int param_1,double *param_2)

{
  double dVar1;
  int iVar2;
  int iVar3;
  uint local_14;
  int local_10;
  int local_c;
  double local_8;
  
  iVar2 = param_1;
  iVar3 = FUN_004260d0(param_1,&param_1);
  if (-1 < iVar3) {
    if (param_1 != 0) {
      *(undefined4 *)param_2 = 0xcccccccd;
      *(undefined4 *)((int)param_2 + 4) = 0x400ccccc;
      return 0;
    }
    iVar3 = FUN_00428d60(iVar2,&local_14);
    if (-1 < iVar3) {
      iVar3 = FUN_00428c90(iVar2,&local_10);
      if (-1 < iVar3) {
        iVar3 = FUN_00428b80(iVar2,&local_8);
        if (-1 < iVar3) {
          dVar1 = (double)(int)((local_14 & 0xffff) * local_c * local_10) * local_8 * _DAT_0058b700
                  * _DAT_0058aa90;
          *param_2 = dVar1;
          if (dVar1 != _DAT_00589f10) {
            return 0;
          }
          iVar3 = 1;
        }
      }
    }
  }
  return iVar3;
}


