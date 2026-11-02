/* Module: rmme3260.dll
   Function: FUN_66212200
   Address: 66212200
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66212200(void *this,int *param_1)

{
  undefined4 uVar1;
  
  if ((*(void **)((int)this + 0x2d6) != (void *)0x0) && (param_1 != (int *)0x0)) {
    uVar1 = FUN_66224900(*(void **)((int)this + 0x2d6),param_1);
    return uVar1;
  }
  return 0x80004005;
}


