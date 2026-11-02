/* Module: encn3260.dll
   Function: FUN_66485060
   Address: 66485060
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66485060(void *this,int *param_1)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  
  *(undefined2 *)((int)this + 0x62) = 0;
  puVar1 = *(undefined2 **)(*(int *)((int)this + 0xfa) + 8);
  if (puVar1 != (undefined2 *)0x0) {
    uVar2 = FUN_66485100(this,puVar1,param_1,1);
    return uVar2;
  }
  return 0x80004005;
}


