/* Module: pncrt.dll
   Function: rename
   Address: 7801a690
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl rename(char *_OldFilename,char *_NewFilename)

{
  BOOL BVar1;
  uint uVar2;
  
                    /* 0x1a690  691  rename */
  BVar1 = MoveFileA(_OldFilename,_NewFilename);
  if (BVar1 == 0) {
    uVar2 = GetLastError();
  }
  else {
    uVar2 = 0;
  }
  if (uVar2 != 0) {
    FUN_7800a870(uVar2);
    return -1;
  }
  return 0;
}


