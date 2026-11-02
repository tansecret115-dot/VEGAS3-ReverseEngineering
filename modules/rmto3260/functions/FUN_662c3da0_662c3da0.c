/* Module: rmto3260.dll
   Function: FUN_662c3da0
   Address: 662c3da0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662c3da0(int *param_1,int *param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int local_8;
  
  piVar2 = param_1;
  iVar3 = (**(code **)(*param_1 + 0x4c))(param_1,(int)&param_1 + 2);
  if (-1 < iVar3) {
    iVar4 = 0;
    bVar1 = false;
    if (param_1._2_2_ != 0) {
      do {
        if (iVar3 < 0) break;
        if (bVar1) {
          return iVar3;
        }
        iVar3 = (**(code **)(*piVar2 + 0x50))(piVar2,iVar4,&local_8);
        if ((-1 < iVar3) && (*(int *)(local_8 + 0x12) != 0)) {
          bVar1 = true;
          *param_2 = local_8;
        }
        iVar4 = iVar4 + 1;
      } while ((ushort)iVar4 < param_1._2_2_);
    }
    if (!bVar1) {
      iVar3 = -0x7ffbff7f;
    }
  }
  return iVar3;
}


