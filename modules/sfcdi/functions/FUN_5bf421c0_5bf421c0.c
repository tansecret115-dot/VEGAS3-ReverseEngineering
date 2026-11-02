/* Module: sfcdi.dll
   Function: FUN_5bf421c0
   Address: 5bf421c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf421c0(int param_1,undefined4 param_2,char *param_3,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  uint local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  iVar1 = param_1;
  FUN_5bf41a70(param_1,(byte)param_2,(byte *)&local_10,(char *)&local_4,(char *)&param_2);
  pcVar2 = param_3;
  FUN_5bf41a70((int)param_3,(byte)param_4,(byte *)&local_c,(char *)&local_8,(char *)&param_1);
  iVar3 = FUN_5bf42130(iVar1,local_10 & 0xff,pcVar2,local_c & 0xff,0x1e);
  if (iVar3 == 0) {
    FUN_5bf42130((local_10 & 0xff) + 1 + iVar1,local_4 & 0xff,pcVar2 + (local_c & 0xff) + 1,
                 local_8 & 0xff,0x1e);
  }
  return;
}


