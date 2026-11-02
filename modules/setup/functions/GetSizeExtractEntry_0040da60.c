/* Module: Setup.exe
   Function: GetSizeExtractEntry
   Address: 0040da60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall CArchive2::GetSizeExtractEntry(char const *,__int64 &,unsigned long) */

long CArchive2::GetSizeExtractEntry(char *param_1,__int64 *param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int local_468;
  uchar local_464 [260];
  int local_360 [11];
  uint local_334;
  int local_330;
  CHAR local_30c [780];
  
                    /* 0xda60  38  ?GetSizeExtractEntry@CArchive2@@QAGJPBDAA_JK@Z */
  *(undefined4 *)param_3 = 0;
  *(undefined4 *)(param_3 + 4) = 0;
  if (*(int *)(param_1 + 0x24) == 0) {
    uVar2 = 0x80004005;
  }
  else {
    local_468 = 0;
    piVar4 = local_360;
    for (iVar3 = 0xd8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar4 = 0;
      piVar4 = piVar4 + 1;
    }
    uVar2 = FUN_0040a570(param_1,(uchar *)param_2,local_464,&local_468);
    if (-1 < (int)uVar2) {
      uVar2 = FUN_00411200(param_1,local_360);
      while (uVar2 == 0) {
        iVar3 = FUN_0040a690(local_30c,(LPCSTR)local_464,local_468);
        if (iVar3 != 0) {
          uVar1 = *(uint *)param_3;
          *(uint *)param_3 = uVar1 + local_334;
          *(uint *)(param_3 + 4) = *(int *)(param_3 + 4) + local_330 + (uint)CARRY4(uVar1,local_334)
          ;
          if (local_468 == 0) break;
        }
        uVar2 = FUN_004112c0(param_1,local_360);
      }
    }
  }
  return (-1 < (int)uVar2) - 1 & uVar2;
}


