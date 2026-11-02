/* Module: mp3plug.dll
   Function: FUN_5f69c030
   Address: 5f69c030
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5f69c030(void *this,int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_5f69bec0(this,2,param_1,(undefined4 *)0x0);
  if (iVar1 != 0) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *(undefined4 *)(iVar1 + 4);
    }
    return 0;
  }
  return 0x8004e00a;
}


