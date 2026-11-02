/* Module: sfppack3.dll
   Function: FUN_5cc35340
   Address: 5cc35340
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5cc35340(void *this,int param_1,uint param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  double *pdVar5;
  int local_110;
  double local_108 [32];
  
  if (param_3 != 0) {
    local_110 = param_3;
    do {
      uVar3 = 0;
      if (param_2 != 0) {
        pdVar5 = local_108;
        do {
          pbVar1 = (byte *)(uVar3 + param_1);
          uVar3 = uVar3 + 1;
          *pdVar5 = (double)(int)(char)(*pbVar1 ^ 0x80) * _DAT_5cc87d68;
          pdVar5 = pdVar5 + 1;
        } while (uVar3 < param_2);
      }
      FUN_5cc34f70(this,local_108,param_2);
      uVar3 = 0;
      if (param_2 != 0) {
        do {
          iVar4 = ftol();
          if (iVar4 < -0x80) {
            bVar2 = 0;
          }
          else if (iVar4 < 0x80) {
            bVar2 = (byte)iVar4 ^ 0x80;
          }
          else {
            bVar2 = 0xff;
          }
          *(byte *)(uVar3 + param_1) = bVar2;
          uVar3 = uVar3 + 1;
        } while (uVar3 < param_2);
      }
      param_1 = param_1 + param_2;
      local_110 = local_110 + -1;
    } while (local_110 != 0);
  }
  return 0;
}


