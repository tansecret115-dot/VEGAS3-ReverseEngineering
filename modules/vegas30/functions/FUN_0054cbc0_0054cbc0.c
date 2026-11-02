/* Module: vegas30.exe
   Function: FUN_0054cbc0
   Address: 0054cbc0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0054cbc0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 local_208 [520];
  
  SfPrintF(local_208,"%s /NOLOGO /NotifyWindow:%x /pkey %s @%s /CLEANUP",&DAT_00647c24,DAT_00647624,
           &DAT_00647390,param_2);
  iVar1 = FUN_004050f0(local_208,1);
  if (iVar1 == 0) {
    uVar2 = _SfGetString_8(DAT_00647204,0x6df5);
    puVar4 = &DAT_00647c24;
    uVar3 = _SfGetString_8(DAT_00647204,0x6df4);
    SfMsgBox(DAT_00647624,0x40,uVar3,puVar4,uVar2);
  }
  return iVar1;
}


