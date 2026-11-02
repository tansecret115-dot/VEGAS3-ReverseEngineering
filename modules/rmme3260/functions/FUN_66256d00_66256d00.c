/* Module: rmme3260.dll
   Function: FUN_66256d00
   Address: 66256d00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66256d00(void *this,uint param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = param_1 % *(uint *)((int)this + 4);
  *param_2 = uVar2;
  if (*(int *)this != 0) {
    for (puVar1 = *(undefined4 **)(*(int *)this + uVar2 * 4); puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)*puVar1) {
      if (puVar1[2] == param_1) {
        return puVar1;
      }
    }
  }
  return (undefined4 *)0x0;
}


