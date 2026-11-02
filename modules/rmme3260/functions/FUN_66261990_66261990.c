/* Module: rmme3260.dll
   Function: FUN_66261990
   Address: 66261990
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66261990(void *this,byte *param_1,char *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_662619c0(this,param_1,param_2);
  if (iVar1 == 0) {
    return 1;
  }
  *param_3 = *(undefined4 *)(iVar1 + 0x3c);
  return 0;
}


