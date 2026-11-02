/* Module: vegas30.exe
   Function: FUN_005fed00
   Address: 005fed00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_005fed00(int param_1,LPSTR param_2,int param_3)

{
  undefined1 local_1c [4];
  CHAR local_18 [12];
  undefined1 local_c [12];
  
  if (*(char *)(param_1 + 0x78c) != '\0') {
    lstrcpynA(param_2,(LPSTR)(param_1 + 0x78c),param_3);
    param_2[param_3 + -1] = '\0';
    return;
  }
  _SfSpike2GetMachineCodeString_12(1,local_c,0xb);
  FUN_005fee70(local_1c,3);
  wsprintfA(local_18,"%s-%s",local_c,local_1c);
  lstrcpynA(param_2,local_18,param_3);
  param_2[param_3 + -1] = '\0';
  lstrcpynA((LPSTR)(param_1 + 0x78c),local_18,0xb);
  *(undefined1 *)(param_1 + 0x796) = 0;
  return;
}


