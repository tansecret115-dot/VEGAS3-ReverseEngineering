/* Module: mpgvout.001
   Function: FUN_10001a80
   Address: 10001a80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x10001b5c) */
/* WARNING: Removing unreachable block (ram,0x10001b4c) */
/* WARNING: Removing unreachable block (ram,0x10001aed) */
/* WARNING: Removing unreachable block (ram,0x10001ab1) */

ulonglong FUN_10001a80(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = 1;
  piVar1 = (int *)cpuid_basic_info(0);
  uVar6 = piVar1[2] ^ 0x69746e65U;
  if (*piVar1 != 0) {
    iVar2 = cpuid_Version_info(1);
    uVar6 = *(uint *)(iVar2 + 8);
    uVar5 = -(uint)((uVar6 & 0x2000000) != 0);
    uVar7 = -(uint)((uVar6 & 0x10) != 0) & 0x10 | 3 | -(uint)((uVar6 & 0x800000) != 0) & 0x20 |
            -(uint)((uVar6 & 0x8000) != 0) & 0x40 | -(uint)((uVar6 & 0x1000) != 0) & 0x1000 |
            uVar5 & 0x600;
    piVar3 = (int *)cpuid(0x80000000);
    uVar6 = piVar3[2];
    if (*piVar3 < 0) {
      puVar4 = (uint *)cpuid(0x80000001);
      uVar6 = puVar4[2];
      uVar7 = uVar7 | 4 | -(uint)((uVar6 & 0x80000000) != 0) & 0x80;
      if ((piVar1[1] == 0x68747541 && (piVar1[2] ^ 0x69746e65U) == 0) && piVar1[3] == 0x444d4163) {
        uVar7 = uVar7 | -(uint)((uVar6 & 0x40000000) != 0) & 0x100;
        if ((uVar5 & 0x200) == 0) {
          uVar7 = uVar7 | -(uint)((uVar6 & 0x400000) != 0) & 0x200;
        }
        uVar6 = -(uint)((*puVar4 & 0xfff) < 0x600) & ~-(uint)((*puVar4 & 0xfff) < 0x588) & 0x800;
        uVar7 = uVar7 | uVar6;
      }
    }
  }
  return CONCAT44(uVar6,uVar7) & 0xfffffffffffffbff;
}


