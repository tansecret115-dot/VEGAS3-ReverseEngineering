/* Module: rmme3260.dll
   Function: FUN_6624d530
   Address: 6624d530
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_6624d530(undefined4 *param_1,int param_2,undefined4 param_3,byte param_4)

{
  bool bVar1;
  uint uVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (((param_4 & 4) != 0) || (((&DAT_66270568)[param_2 * 4] & 2) != 0)) {
    puVar5 = param_1 + 0x11e;
    puVar4 = param_1;
    for (iVar3 = 0x10a; puVar4 = puVar4 + 1, iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar5 = puVar5 + 1;
    }
    FUN_6624f950((int)(param_1 + 0x11e),param_2);
    if (((&DAT_66270568)[param_2 * 4] & 0x10) != 0) {
      FUN_6624cca0((int)param_1);
    }
    if (param_1[0x10f] != 0) {
      param_1[0x11f] = param_1[0x11f] << 1;
      param_1[0x120] = param_1[0x120] << 1;
    }
    iVar3 = *(int *)(&DAT_66270598 + param_2 * 4);
    param_1[0x228] = iVar3 * param_1[0x11f];
    if (((&DAT_66270568)[param_2 * 4] & 2) != 0) {
      param_1[0x228] = -(3U - iVar3 * param_1[0x11f] & 0xfffffffc);
    }
    param_1[0x22a] = param_3;
    if (((param_4 & 2) != 0) && (DAT_6627e544 != (code *)0x0)) {
      iVar3 = (*DAT_6627e544)();
      param_1[0x11d] = iVar3;
      if (iVar3 != 0) {
        uVar2 = FUN_6624d6e0(param_1,2);
        if (uVar2 != 0) {
          bVar1 = FUN_6624d680((int)param_1,param_4);
          if (CONCAT31(extraout_var,bVar1) != 0) {
            return 1;
          }
        }
        if (DAT_6627e550 != (code *)0x0) {
          (*DAT_6627e550)(param_1[0x11d]);
        }
      }
    }
    if (((param_4 & 1) != 0) && (((&DAT_66270568)[param_2 * 4] & 2) != 0)) {
      uVar2 = FUN_6624d6e0(param_1,1);
      if (uVar2 != 0) {
        bVar1 = FUN_6624d680((int)param_1,param_4);
        if (CONCAT31(extraout_var_00,bVar1) != 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}


