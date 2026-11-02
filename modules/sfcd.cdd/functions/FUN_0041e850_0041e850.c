/* Module: sfcd.cdd
   Function: FUN_0041e850
   Address: 0041e850
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0041e8b4) */

undefined8 FUN_0041e850(void)

{
  int iVar1;
  uint uVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar3;
  bool bVar4;
  byte in_ID;
  _SYSTEM_INFO local_30;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  uVar2 = FUN_0041e380();
  if (uVar2 == 0) {
    GetSystemInfo(&local_30);
    bVar4 = local_30.dwProcessorType == 0x24a;
    uVar3 = extraout_EDX_00;
  }
  else {
    bVar4 = (uint)((in_ID & 1) != 1) * 0x200000 != (uint)(in_ID & 1) * 0x200000;
    uVar3 = extraout_EDX;
  }
  if (!bVar4) {
    return CONCAT44(uVar3,0xffffffff);
  }
  iVar1 = cpuid_basic_info(0);
  return CONCAT44(CONCAT22((short)((uint)*(undefined4 *)(iVar1 + 8) >> 0x10),(short)uVar3),
                  *(undefined4 *)
                   (CONCAT22((short)((uint)&stack0xfffffffc >> 0x10),(short)&stack0xfffffffc) + -4))
  ;
}


