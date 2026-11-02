/* Module: sfs4rw.dll
   Function: FUN_00404920
   Address: 00404920
   Source: Ghidra pseudocode (Stage 10 batch) */


short * FUN_00404920(int *param_1,int *param_2,LPCSTR param_3,LPCSTR param_4,undefined4 *param_5,
                    LPCSTR param_6,undefined4 *param_7)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  HGLOBAL pvVar5;
  short *psVar6;
  short *local_4;
  
  puVar3 = param_5;
  piVar2 = param_2;
  piVar1 = param_1;
  psVar6 = (short *)0x0;
  local_4 = (short *)0x0;
  if (((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) || (param_7 == (undefined4 *)0x0)) {
    return (short *)0x0;
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0;
  }
  *param_1 = 0;
  *param_2 = 0;
  *param_7 = 0;
  param_1 = (int *)0x0;
  if (((param_3 != (LPCSTR)0x0) && (*param_3 != '\0')) &&
     (uVar4 = FUN_00426f00(param_3,2,&param_1), -1 < (int)uVar4)) {
    uVar4 = FUN_00426b30(param_1,param_4,&local_4);
    if ((-1 < (int)uVar4) && (local_4 != (short *)0x0)) {
      if (*local_4 == 0x4d42) {
        psVar6 = local_4 + 7;
        *piVar1 = (int)local_4;
        *piVar2 = (int)psVar6;
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = *(undefined4 *)(local_4 + 9);
          puVar3[1] = *(undefined4 *)(local_4 + 0xb);
        }
      }
      else {
        pvVar5 = GlobalHandle(local_4);
        GlobalUnlock(pvVar5);
        pvVar5 = GlobalHandle(local_4);
        GlobalFree(pvVar5);
        local_4 = (short *)0x0;
      }
    }
    FUN_00425520(param_1);
    if (psVar6 != (short *)0x0) {
      return psVar6;
    }
  }
  psVar6 = FUN_00404a40(param_6,puVar3);
  *piVar2 = (int)psVar6;
  *piVar1 = 0;
  *param_7 = 1;
  return psVar6;
}


