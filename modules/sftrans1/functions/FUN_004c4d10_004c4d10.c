/* Module: sftrans1.dll
   Function: FUN_004c4d10
   Address: 004c4d10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004c4d74) */

undefined8 FUN_004c4d10(void)

{
  int iVar1;
  undefined4 extraout_EDX;
  undefined4 uVar2;
  bool bVar3;
  byte in_ID;
  undefined8 uVar4;
  _SYSTEM_INFO local_30;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  uVar4 = FUN_004c4840();
  uVar2 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if ((int)uVar4 == 0) {
    GetSystemInfo(&local_30);
    bVar3 = local_30.dwProcessorType == 0x24a;
    uVar2 = extraout_EDX;
  }
  else {
    bVar3 = (uint)((in_ID & 1) != 1) * 0x200000 != (uint)(in_ID & 1) * 0x200000;
  }
  if (!bVar3) {
    return CONCAT44(uVar2,0xffffffff);
  }
  iVar1 = cpuid_basic_info(0);
  return CONCAT44(CONCAT22((short)((uint)*(undefined4 *)(iVar1 + 8) >> 0x10),(short)uVar2),
                  *(undefined4 *)
                   (CONCAT22((short)((uint)&stack0xfffffffc >> 0x10),(short)&stack0xfffffffc) + -4))
  ;
}


