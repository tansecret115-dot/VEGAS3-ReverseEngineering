/* Module: qt4plug.dll
   Function: FUN_5f5180b0
   Address: 5f5180b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x5f518136) */
/* WARNING: Removing unreachable block (ram,0x5f51814d) */
/* WARNING: Removing unreachable block (ram,0x5f518167) */
/* WARNING: Removing unreachable block (ram,0x5f51817f) */
/* WARNING: Removing unreachable block (ram,0x5f518196) */
/* WARNING: Removing unreachable block (ram,0x5f5181ad) */

undefined4 FUN_5f5180b0(uint param_1,undefined4 *param_2,uint *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  *param_2 = 0;
  *param_3 = 1;
  *param_4 = 0;
  iVar1 = FUN_5f5782f0();
  if (iVar1 != 0) {
    uVar2 = 1;
    iVar1 = FUN_5f5782f0();
    if (iVar1 != 0) {
      FUN_5f5781b0();
    }
    *param_2 = 0;
  }
  return uVar2;
}


