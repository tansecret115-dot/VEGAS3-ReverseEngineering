/* Module: vegas30k.dll
   Function: FUN_0118f360
   Address: 0118f360
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0118f360(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 local_18 [24];
  
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((int)param_1 + 4) = 0;
  iVar1 = FUN_0118f3a0(local_18);
  if (-1 < iVar1) {
    uVar2 = _SFSMPTE_SMPTEToNanos_4(local_18);
    *param_1 = uVar2;
  }
  return iVar1;
}


