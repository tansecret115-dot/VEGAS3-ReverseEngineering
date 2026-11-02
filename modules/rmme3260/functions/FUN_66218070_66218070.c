/* Module: rmme3260.dll
   Function: FUN_66218070
   Address: 66218070
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_66218070(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *(undefined4 *)((int)this + 0x28);
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)((int)this + 0x2c);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)((int)this + 0x30);
  }
  return 0;
}


