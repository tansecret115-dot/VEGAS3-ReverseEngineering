/* Module: vegas30k.dll
   Function: FUN_0101e870
   Address: 0101e870
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0101e870(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  HGLOBAL pvVar2;
  LPVOID pvVar3;
  undefined4 unaff_EBP;
  undefined4 *puVar4;
  
  iVar1 = 1;
  if (param_1 != (int *)0x0) {
    puVar4 = param_4;
    for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    iVar1 = (**(code **)(*param_1 + 0x44))(param_1,param_4,param_2,1);
    if (-1 < iVar1) {
      pvVar2 = GlobalAlloc(0x42,param_4[3]);
      pvVar3 = GlobalLock(pvVar2);
      param_4[1] = pvVar3;
      if (pvVar3 != (LPVOID)0x0) {
        param_4[2] = param_4[3];
        pvVar2 = GlobalAlloc(0x42,param_4[6]);
        pvVar3 = GlobalLock(pvVar2);
        param_4[4] = pvVar3;
        if (pvVar3 != (LPVOID)0x0) {
          param_4[5] = param_4[6];
          iVar1 = (**(code **)(*param_1 + 0x44))(param_1,param_4,unaff_EBP,1);
          return iVar1;
        }
      }
      return -0x7ff8fff2;
    }
  }
  return iVar1;
}


