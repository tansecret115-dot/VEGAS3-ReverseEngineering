/* Module: sfcd.cdd
   Function: FUN_0040e980
   Address: 0040e980
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040e980(int param_1,LPSTR param_2,int param_3)

{
  int iVar1;
  int local_404;
  char local_400 [256];
  char local_300 [256];
  CHAR local_200 [512];
  
  cdr_LoadSenseString(*(byte *)(param_1 + 0x16) & 0xf,local_300,0x100);
  iVar1 = FUN_0040e910(*(byte *)(param_1 + 0x16) & 0xf,(uint)*(byte *)(param_1 + 0x20),
                       (uint)*(byte *)(param_1 + 0x21),&local_404,(undefined4 *)(param_1 + 0x46));
  if (iVar1 == 0) {
    wsprintfA(local_400,"Unknown Additional Sense %02x %02x",(uint)*(byte *)(param_1 + 0x20),
              (uint)*(byte *)(param_1 + 0x21));
  }
  else {
    cdr_LoadSenseString(local_404,local_400,0x100);
  }
  wsprintfA(local_200,"%s\r\n%s\r\n",local_300,local_400);
  if (param_2 != (LPSTR)0x0) {
    lstrcpynA(param_2,local_200,param_3);
    param_2[param_3 + -1] = '\0';
  }
  return 0;
}


