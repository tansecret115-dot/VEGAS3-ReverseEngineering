/* Module: sfcdi.dll
   Function: FUN_5bf46410
   Address: 5bf46410
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_5bf46410(undefined4 *param_1,LPCSTR param_2,LPCSTR param_3,uint param_4,int param_5,
            undefined4 *param_6,undefined4 param_7)

{
  uint uVar1;
  undefined4 *puVar2;
  LPCSTR pCVar3;
  HANDLE hFile;
  DWORD DVar4;
  BOOL BVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  DWORD local_8;
  undefined4 *local_4;
  
  puVar2 = param_1;
  if (param_1 == (undefined4 *)0xffffffff) {
    uVar8 = 0x80070057;
  }
  else {
    local_4 = param_1;
    if ((param_1[1] & 1) == 0) {
      hFile = CreateFileA(param_2,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
      *puVar2 = hFile;
      if (hFile != (HANDLE)0xffffffff) {
        puVar2[8] = param_3;
        puVar2[9] = param_4;
        SetFilePointer(hFile,(LONG)param_3,(PLONG)0x0,0);
        if ((param_5 == -1) && (param_6 == (undefined4 *)0xffffffff)) {
          DVar4 = GetFileSize((HANDLE)*puVar2,(LPDWORD)&param_2);
          puVar2[10] = DVar4;
          puVar2[0xe] = 0;
          puVar2[0xb] = param_2;
          puVar2[0xf] = 0;
          return 0;
        }
        puVar2[10] = param_5;
        puVar2[0xe] = 0;
        puVar2[0xb] = param_6;
        puVar2[0xf] = 0;
        return 0;
      }
    }
    else {
      param_1 = CreateFileA(param_2,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x60000080,(HANDLE)0x0
                           );
      uVar7 = param_4;
      pCVar3 = param_3;
      *puVar2 = param_1;
      if (param_1 != (undefined4 *)0xffffffff) {
        if ((param_3 == (LPCSTR)0x0) && (param_4 == 0)) {
          puVar2[8] = 0;
          param_2 = (LPCSTR)0x0;
          puVar2[9] = 0;
        }
        else {
          puVar2[8] = param_3;
          puVar2[9] = param_4;
          uVar9 = __aullrem((uint)param_3,param_4,puVar2[2],0);
          param_2 = (LPCSTR)uVar9;
          if (param_2 != (LPCSTR)0x0) {
            puVar2[8] = (int)pCVar3 - (int)param_2;
            puVar2[9] = uVar7 - (pCVar3 < param_2);
          }
        }
        puVar2[6] = 0;
        puVar2[4] = param_7;
        puVar2[0xc] = param_2 + puVar2[0x10];
        puVar2[0xe] = 0;
        puVar2[0xd] = 0;
        puVar2[7] = 0;
        puVar2[0xf] = 0;
        if ((param_5 == -1) && (param_6 == (undefined4 *)0xffffffff)) {
          DVar4 = GetFileSize(param_1,(LPDWORD)&param_1);
          puVar2[10] = DVar4;
          puVar6 = param_1;
        }
        else {
          puVar2[10] = param_5;
          puVar6 = param_6;
        }
        uVar7 = 0;
        puVar2[0xb] = puVar6;
        if (puVar2[4] != 0) {
          do {
            ResetEvent((HANDLE)puVar2[uVar7 * 7 + 0x16]);
            puVar2[uVar7 * 7 + 0x14] = puVar2[8];
            puVar2[(uVar7 + 3) * 7] = puVar2[9];
            BVar5 = ReadFile((HANDLE)*puVar2,(LPVOID)puVar2[uVar7 * 7 + 0x10],puVar2[3],(LPDWORD)0x0
                             ,(LPOVERLAPPED)(puVar2 + uVar7 * 7 + 0x12));
            if (((BVar5 == 0) && (DVar4 = GetLastError(), DVar4 != 0x3e5)) && (DVar4 != 0x26)) {
              uVar8 = 0x8004e008;
              goto LAB_5bf46676;
            }
            if (uVar7 == 0) {
              WaitForSingleObject((HANDLE)puVar2[0x16],0xffffffff);
              GetOverlappedResult((HANDLE)*puVar2,(LPOVERLAPPED)(puVar2 + 0x12),&local_8,0);
              puVar2[0x11] = local_8 - (int)param_2;
              puVar2[6] = local_8 - (int)param_2;
              puVar2[7] = 0;
            }
            uVar1 = puVar2[8];
            puVar2[8] = uVar1 + puVar2[3];
            uVar7 = uVar7 + 1;
            puVar2[9] = puVar2[9] + (uint)CARRY4(uVar1,puVar2[3]);
          } while (uVar7 < (uint)puVar2[4]);
        }
        return 0;
      }
    }
    uVar8 = 0x8004e006;
  }
LAB_5bf46676:
  if ((HANDLE)*local_4 != (HANDLE)0xffffffff) {
    CloseHandle((HANDLE)*local_4);
  }
  return uVar8;
}


