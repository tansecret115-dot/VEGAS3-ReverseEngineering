/* Module: sfs4rw.dll
   Function: FUN_00423200
   Address: 00423200
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0042326f) */

undefined8 FUN_00423200(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined8 uVar7;
  _SYSTEM_INFO local_48;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  void *pvStack_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar5 = &stack0xfffffffc;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_0049aa20;
  puStack_10 = &DAT_0048b4ac;
  pvStack_14 = ExceptionList;
  local_1c = &stack0xffffffa0;
  ExceptionList = &pvStack_14;
  GetSystemInfo(&local_48);
  uVar6 = 0;
  uVar3 = 0;
  local_20 = 0;
  if (local_48.dwProcessorType == 0x1e6) {
    local_24 = 1;
  }
  else if (local_48.dwProcessorType == 0x24a) {
    local_24 = 2;
  }
  else {
    local_24 = 0;
  }
  uVar7 = FUN_00423180();
  uVar2 = (uint)((ulonglong)uVar7 >> 0x20);
  if (0 < (int)uVar7) {
    iVar1 = cpuid_Version_info(1);
    puVar5 = (undefined1 *)CONCAT22((short)((uint)&stack0xfffffffc >> 0x10),(short)&stack0xfffffffc)
    ;
    uVar2 = CONCAT22((short)((uint)*(undefined4 *)(iVar1 + 8) >> 0x10),
                     (short)((ulonglong)uVar7 >> 0x20));
    uVar6 = *(uint *)(puVar5 + -0x48);
    uVar3 = *(uint *)(puVar5 + -0x1c);
  }
  if ((uVar6 & 0x10) != 0) {
    *(undefined4 *)(puVar5 + -0x1c) = 0x400;
    uVar3 = *(uint *)(puVar5 + -0x1c);
  }
  uVar4 = uVar3;
  if ((uVar6 & 0x8000) != 0) {
    uVar4 = uVar3 | 0x100;
    uVar2 = uVar6 & 1;
    if ((char)uVar2 != '\0') {
      uVar4 = CONCAT22((short)(uVar3 >> 0x10),CONCAT11((char)(uVar4 >> 8),(char)uVar3)) | 0x200;
      *(undefined4 *)(puVar5 + -0x20) = 3;
    }
  }
  if (((uVar6 & 0x800000) != 0) && (uVar4 = uVar4 | 0x10, *(int *)(puVar5 + -0x20) == 3)) {
    *(undefined4 *)(puVar5 + -0x20) = 4;
  }
  if ((uVar6 & 0x2000000) != 0) {
    uVar4 = uVar4 | 0x20;
    *(uint *)(puVar5 + -0x1c) = uVar4;
    *(undefined4 *)(puVar5 + -4) = 0;
    *(undefined4 *)(puVar5 + -4) = 0xffffffff;
    *(undefined4 *)(puVar5 + -0x20) = 5;
  }
  if ((uVar6 & 0x4000000) != 0) {
    uVar4 = uVar4 | 0x40;
    *(uint *)(puVar5 + -0x1c) = uVar4;
    *(undefined4 *)(puVar5 + -4) = 1;
    *(undefined4 *)(puVar5 + -4) = 0xffffffff;
    *(undefined4 *)(puVar5 + -0x20) = 6;
  }
  ExceptionList = *(void **)(puVar5 + -0x10);
  return CONCAT44(uVar2,*(uint *)(puVar5 + -0x20) | uVar4);
}


