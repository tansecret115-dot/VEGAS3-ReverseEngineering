/* Module: sfcdi.dll
   Function: FUN_5bf20690
   Address: 5bf20690
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf20690(HSFCD__ *param_1,int *param_2,LPCSTR param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  LPSTR pCVar3;
  int *local_3b0;
  undefined4 local_3ac [10];
  _mediainfo local_384 [44];
  tCDR_ERRORDATA local_358 [344];
  CHAR local_200 [512];
  
  local_3b0 = (int *)0x0;
  cdr_GetMediaInfo(param_1,local_384);
  cdr_GetErrorState(param_1,local_358);
  *param_4 = 0;
  iVar1 = FUN_5bf3e0c0(&local_3b0);
  if (((-1 < iVar1) && (iVar1 = FUN_5bf43890(local_3ac), -1 < iVar1)) &&
     (iVar1 = FUN_5bf3cf20(local_3ac,0,local_3b0,0), -1 < iVar1)) {
    iVar1 = local_3b0[0x13];
    *(undefined4 *)(iVar1 + 0xc) = 2;
    pCVar3 = (LPSTR)(iVar1 + 0xbe3);
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      pCVar3[0] = '\0';
      pCVar3[1] = '\0';
      pCVar3[2] = '\0';
      pCVar3[3] = '\0';
      pCVar3 = pCVar3 + 4;
    }
    *pCVar3 = '\0';
    lstrcpynA((LPSTR)(iVar1 + 0xbe3),param_3,0x20);
    *(undefined1 *)(iVar1 + 0xc02) = 0;
    iVar1 = FUN_5bf3efa0(local_3b0,param_2);
    if (-1 < iVar1) {
      *param_4 = local_3b0;
      return iVar1;
    }
  }
  FUN_5bf3ce00((int)local_3b0,local_200,0x200);
  if (local_3b0 == (int *)0x0) {
    return iVar1;
  }
  FUN_5bf3d1d0(local_3b0);
  FUN_5bf3ceb0(local_3b0);
  FUN_5bf3e060(local_3b0);
  return iVar1;
}


