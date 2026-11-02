/* Module: vegas30.exe
   Function: FUN_0043e980
   Address: 0043e980
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0043e980(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  HGLOBAL hMem;
  LPVOID pvVar4;
  undefined4 *puStack_1c;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  undefined4 local_4;
  
  local_10 = 0;
  puStack_1c = &param_1;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  uVar3 = (**(code **)(*param_1 + 0xc))(param_1,&local_10);
  iVar2 = local_8;
  if (*(int *)(local_8 + 0x28) == 0) {
    hMem = GlobalAlloc(2,0x14);
    pvVar4 = GlobalLock(hMem);
    *(LPVOID *)(iVar2 + 0x28) = pvVar4;
  }
  if (*(undefined4 **)(iVar2 + 0x28) == (undefined4 *)0x0) {
    return 0x8007000e;
  }
  **(undefined4 **)(iVar2 + 0x28) = 0;
  puVar1 = *(undefined4 **)(iVar2 + 0x28);
  *puVar1 = 0x10;
  lstrcpynA((LPSTR)(puVar1 + 1),(LPCSTR)&puStack_1c,0xd);
  *(undefined1 *)(puVar1 + 4) = 0;
  return uVar3;
}


