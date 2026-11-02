/* Module: encn3260.dll
   Function: FUN_66490db0
   Address: 66490db0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x66490df6) */

undefined4 FUN_66490db0(undefined4 *param_1)

{
  int *piVar1;
  byte local_8008 [32744];
  undefined4 uStackY_20;
  
  FUN_664d9260();
  piVar1 = (int *)*param_1;
  while (piVar1 != (int *)0x0) {
    param_1 = param_1 + 1;
    uStackY_20 = 0x66490de7;
    FUN_66491190(piVar1,local_8008,(undefined4 *)&stack0xfffffff8);
    piVar1 = (int *)*param_1;
  }
  return 0;
}


