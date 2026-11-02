/* Module: sftrans1.dll
   Function: FUN_00477050
   Address: 00477050
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00477050(int *param_1,undefined4 param_2,undefined4 param_3,HWND param_4)

{
  double dVar1;
  float fVar2;
  int iVar3;
  HWND pHVar4;
  
  iVar3 = FUN_004c4710(param_2,param_3,param_4,10,1000);
  pHVar4 = GetDlgItem((HWND)param_1[0xc],0x5fd);
  if (param_4 == pHVar4) {
    dVar1 = (double)iVar3 * _DAT_0055c078;
    *(double *)(param_1 + 0x14) = dVar1;
    FUN_004c85d0(param_1[0xc],0x606,"%1.3f",dVar1);
    (**(code **)(*param_1 + 0x2c))(param_1);
    return 0;
  }
  pHVar4 = GetDlgItem((HWND)param_1[0xc],0x5fe);
  if (param_4 == pHVar4) {
    dVar1 = (double)iVar3 * _DAT_00562e00 * _DAT_0055c078;
    *(double *)(param_1 + 0x16) = dVar1;
    FUN_004c85d0(param_1[0xc],0x607,"%1.3f",dVar1);
    (**(code **)(*param_1 + 0x2c))(param_1);
    return 0;
  }
  pHVar4 = GetDlgItem((HWND)param_1[0xc],0x5ff);
  if (param_4 == pHVar4) {
    fVar2 = (float)iVar3 * _DAT_00562df8;
    *(double *)(param_1 + 0x18) = (double)fVar2;
    FUN_004c85d0(param_1[0xc],0x608,"%1.3f",(double)fVar2);
    (**(code **)(*param_1 + 0x2c))(param_1);
  }
  return 0;
}


