/* Module: vegas30.exe
   Function: FUN_005e3f40
   Address: 005e3f40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_005e3f40(void)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  undefined4 *puVar2;
  undefined4 local_4;
  
  local_4 = 0;
  hMem = GlobalAlloc(0x40,0x80);
  pvVar1 = GlobalLock(hMem);
  if (pvVar1 != (LPVOID)0x0) {
    puVar2 = (undefined4 *)FUN_005e3ee0();
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(puVar2,&DAT_0060f0d8,&local_4);
      return puVar2;
    }
  }
  return (undefined4 *)0x0;
}


