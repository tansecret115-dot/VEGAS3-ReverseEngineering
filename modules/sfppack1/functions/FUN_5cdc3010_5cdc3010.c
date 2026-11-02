/* Module: sfppack1.dll
   Function: FUN_5cdc3010
   Address: 5cdc3010
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x5cdc3036) */
/* WARNING: Removing unreachable block (ram,0x5cdc3047) */
/* WARNING: Removing unreachable block (ram,0x5cdc3049) */
/* WARNING: Removing unreachable block (ram,0x5cdc304c) */
/* WARNING: Removing unreachable block (ram,0x5cdc3060) */
/* WARNING: Removing unreachable block (ram,0x5cdc306c) */

int __thiscall FUN_5cdc3010(void *this,int *param_1)

{
  int iVar1;
  undefined1 local_28 [40];
  
  iVar1 = (**(code **)(*param_1 + 0xc))(param_1,local_28,0x14);
  if (-1 < iVar1) {
    iVar1 = -0x7fffbffb;
  }
  return iVar1;
}


