/* Module: vegas30k.dll
   Function: syncoutStartSmpte
   Address: 011803c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall syncoutStartSmpte,16 */

int syncoutStartSmpte(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
                    /* 0x1803c0  1447  _syncoutStartSmpte@16 */
  if (param_1 == 0) {
    return -1;
  }
  *(undefined4 *)(param_1 + 0x10) = DAT_01206528;
  _SfDeltaMillisecEx_4(param_1 + 8);
  uVar1 = __alldiv(param_2,param_3,10000,0);
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  uVar1 = _SfGetMillisecEx_4(param_1 + 8);
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  uVar1 = FUN_0117f8e0(param_1);
  FUN_011801f0(param_1,uVar1,param_4);
  iVar2 = FUN_0117fed0(param_1);
  *(int *)(param_1 + 0x30) = iVar2;
  return (iVar2 != 0) - 1;
}


