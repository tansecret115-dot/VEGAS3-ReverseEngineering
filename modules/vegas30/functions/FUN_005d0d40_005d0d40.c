/* Module: vegas30.exe
   Function: FUN_005d0d40
   Address: 005d0d40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_005d0d40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5,undefined4 param_6)

{
  int iVar1;
  
  iVar1 = _SfPlugIn_FindNode_8(DAT_0064b468,&param_1);
  if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0xc) & 4) != 0)) {
    (**(code **)*param_5)(param_5,&DAT_0060f788,param_6);
    return param_2;
  }
  return 0x80004002;
}


