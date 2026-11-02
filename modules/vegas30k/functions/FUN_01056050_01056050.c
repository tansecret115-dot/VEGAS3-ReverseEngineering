/* Module: vegas30k.dll
   Function: FUN_01056050
   Address: 01056050
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x010560bf) */

uint FUN_01056050(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  _SYSTEM_INFO local_48;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  void *pvStack_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar4 = &stack0xfffffffc;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_011e1a60;
  puStack_10 = &DAT_011d81dc;
  pvStack_14 = ExceptionList;
  local_1c = &stack0xffffffa0;
  ExceptionList = &pvStack_14;
  GetSystemInfo(&local_48);
  uVar5 = 0;
  uVar2 = 0;
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
  iVar1 = FUN_01055fd0();
  if (0 < iVar1) {
    cpuid_Version_info(1);
    puVar4 = (undefined1 *)CONCAT22((short)((uint)&stack0xfffffffc >> 0x10),(short)&stack0xfffffffc)
    ;
    uVar5 = *(uint *)(puVar4 + -0x48);
    uVar2 = *(uint *)(puVar4 + -0x1c);
  }
  if ((uVar5 & 0x10) != 0) {
    *(undefined4 *)(puVar4 + -0x1c) = 0x400;
    uVar2 = *(uint *)(puVar4 + -0x1c);
  }
  uVar3 = uVar2;
  if (((uVar5 & 0x8000) != 0) && (uVar3 = uVar2 | 0x100, (uVar5 & 1) != 0)) {
    uVar3 = CONCAT22((short)(uVar2 >> 0x10),CONCAT11((char)(uVar3 >> 8),(char)uVar2)) | 0x200;
    *(undefined4 *)(puVar4 + -0x20) = 3;
  }
  if (((uVar5 & 0x800000) != 0) && (uVar3 = uVar3 | 0x10, *(int *)(puVar4 + -0x20) == 3)) {
    *(undefined4 *)(puVar4 + -0x20) = 4;
  }
  if ((uVar5 & 0x2000000) != 0) {
    uVar3 = uVar3 | 0x20;
    *(uint *)(puVar4 + -0x1c) = uVar3;
    *(undefined4 *)(puVar4 + -4) = 0;
    *(undefined4 *)(puVar4 + -4) = 0xffffffff;
    *(undefined4 *)(puVar4 + -0x20) = 5;
  }
  if ((uVar5 & 0x4000000) != 0) {
    uVar3 = uVar3 | 0x40;
    *(uint *)(puVar4 + -0x1c) = uVar3;
    *(undefined4 *)(puVar4 + -4) = 1;
    *(undefined4 *)(puVar4 + -4) = 0xffffffff;
    *(undefined4 *)(puVar4 + -0x20) = 6;
  }
  ExceptionList = *(void **)(puVar4 + -0x10);
  return *(uint *)(puVar4 + -0x20) | uVar3;
}


