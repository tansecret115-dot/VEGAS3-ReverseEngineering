/* Module: sfs4rw.dll
   Function: FUN_004026a0
   Address: 004026a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_004026a0(void *param_1)

{
  int *piVar1;
  int iVar2;
  int local_8;
  int local_4;
  
  DAT_004a82d5 = 0;
  DAT_004a812c = 0;
  piVar1 = *(int **)((int)param_1 + 0x144);
  if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
    iVar2 = *(int *)(piVar1[2] + -4 + *piVar1 * 4);
    DAT_004a812c = *(undefined4 *)(iVar2 + 0x20c);
    DAT_004a84f4 = *(undefined4 *)(iVar2 + 0x20c);
    DAT_004a8130 = *(undefined4 *)(iVar2 + 0x210);
    lstrcpynA(&DAT_004a8355,(LPCSTR)(iVar2 + 4),0x80);
    DAT_004a83d4 = 0;
    lstrcpynA(&DAT_004a82d5,(LPCSTR)((int)param_1 + 0x3e),0x80);
    DAT_004a8354 = 0;
    lstrcpynA(&DAT_004a8255,(LPCSTR)((int)param_1 + 0x3e),0x80);
    DAT_004a82d4 = 0;
    if (*(void **)((int)param_1 + 8) != (void *)0x0) {
      local_4 = 0;
      local_8 = 0;
      iVar2 = FUN_00416b40(*(void **)((int)param_1 + 8),&local_4,&local_8);
      if (-1 < iVar2) {
        iVar2 = FUN_00402830(param_1,local_4,local_8);
        if (iVar2 != 0) {
          lstrcpynA(&DAT_004a82d5,(LPCSTR)(iVar2 + 4),0x80);
          DAT_004a8354 = 0;
        }
      }
    }
    lstrcpynA(&DAT_004a83d5,(LPCSTR)((int)param_1 + 0x148),0x104);
    DAT_004a84d8 = 0;
    _mbscpy(&DAT_004a823c,(uchar *)((int)param_1 + 0xc));
    DAT_004a84f0 = *(undefined4 *)((int)param_1 + 0x558);
    return 1;
  }
  return 0;
}


