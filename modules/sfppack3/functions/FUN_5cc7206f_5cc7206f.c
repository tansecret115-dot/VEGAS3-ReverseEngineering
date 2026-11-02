/* Module: sfppack3.dll
   Function: FUN_5cc7206f
   Address: 5cc7206f
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5cc7206f(void)

{
  DWORD DVar1;
  int iVar2;
  undefined **ppuVar3;
  uint uVar4;
  WCHAR *lpWideCharStr;
  int cchWideChar;
  WCHAR local_318 [260];
  CHAR local_110 [260];
  int *local_c;
  int local_8;
  
  uVar4 = 0;
  DVar1 = GetModuleFileNameA(DAT_5cc9da98,local_110,0x104);
  if (DVar1 == 0) {
    DVar1 = GetLastError();
    uVar4 = -(uint)(DVar1 != 0) & (DVar1 & 0xffff | 0x80070000);
  }
  else {
    lpWideCharStr = local_318;
    cchWideChar = 0x208;
    iVar2 = lstrlenA(local_110);
    MultiByteToWideChar(0,0,local_110,iVar2 + 1,lpWideCharStr,cchWideChar);
    local_8 = 0;
    if (0 < DAT_5cc93248) {
      ppuVar3 = &PTR_DAT_5cc9315c;
      do {
        uVar4 = FUN_5cc71c64();
        if ((int)uVar4 < 0) {
          return uVar4;
        }
        if (ppuVar3[1] != (undefined *)0x0) {
          uVar4 = CoCreateInstance((IID *)*ppuVar3,(LPUNKNOWN)0x0,1,(IID *)&DAT_5cc8eec8,&local_c);
          if ((int)uVar4 < 0) {
            if ((uVar4 == 0x80004002) || (uVar4 == 0x80040202)) {
              uVar4 = 0;
            }
          }
          else {
            uVar4 = (**(code **)(*local_c + 0x10))(local_c);
            if (-1 < (int)uVar4) {
              uVar4 = (**(code **)(*local_c + 0xc))(local_c);
            }
            (**(code **)(*local_c + 8))(local_c);
          }
        }
        if ((int)uVar4 < 0) {
          return uVar4;
        }
        local_8 = local_8 + 1;
        ppuVar3 = ppuVar3 + 5;
      } while (local_8 < DAT_5cc93248);
    }
  }
  return uVar4;
}


