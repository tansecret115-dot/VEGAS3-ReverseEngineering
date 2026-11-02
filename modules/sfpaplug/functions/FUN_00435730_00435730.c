/* Module: sfpaplug.dll
   Function: FUN_00435730
   Address: 00435730
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004357a2) */
/* WARNING: Removing unreachable block (ram,0x004357d2) */
/* WARNING: Removing unreachable block (ram,0x004357eb) */
/* WARNING: Removing unreachable block (ram,0x0043580e) */
/* WARNING: Removing unreachable block (ram,0x0043582a) */
/* WARNING: Removing unreachable block (ram,0x0043582c) */
/* WARNING: Removing unreachable block (ram,0x0043583a) */
/* WARNING: Removing unreachable block (ram,0x00435840) */
/* WARNING: Removing unreachable block (ram,0x00435877) */
/* WARNING: Removing unreachable block (ram,0x00435885) */
/* WARNING: Removing unreachable block (ram,0x004358b7) */
/* WARNING: Removing unreachable block (ram,0x004358ce) */
/* WARNING: Removing unreachable block (ram,0x004358ee) */
/* WARNING: Removing unreachable block (ram,0x004358d9) */
/* WARNING: Removing unreachable block (ram,0x004358e4) */
/* WARNING: Removing unreachable block (ram,0x0043590f) */
/* WARNING: Removing unreachable block (ram,0x00435922) */
/* WARNING: Removing unreachable block (ram,0x0043593c) */
/* WARNING: Removing unreachable block (ram,0x0043592d) */
/* WARNING: Removing unreachable block (ram,0x00435935) */
/* WARNING: Removing unreachable block (ram,0x0043595a) */
/* WARNING: Removing unreachable block (ram,0x00435972) */
/* WARNING: Removing unreachable block (ram,0x00435978) */
/* WARNING: Removing unreachable block (ram,0x00435995) */
/* WARNING: Removing unreachable block (ram,0x0043599b) */
/* WARNING: Removing unreachable block (ram,0x004359ab) */
/* WARNING: Removing unreachable block (ram,0x004359b3) */
/* WARNING: Removing unreachable block (ram,0x004359e1) */
/* WARNING: Removing unreachable block (ram,0x004359cc) */
/* WARNING: Removing unreachable block (ram,0x004359eb) */

int __thiscall FUN_00435730(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((*(int *)(param_1 + 0x2e0) == 0) &&
     ((iVar1 = FUN_00434da0(param_1), iVar1 < 0 || (iVar1 < 0)))) {
    *(undefined4 *)(param_1 + 0x2e0) = 2;
  }
  return iVar1;
}


