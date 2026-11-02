/* Module: mcplug.dll
   Function: FUN_00470e00
   Address: 00470e00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00470e00(int param_1,LPSTR param_2)

{
  uint local_4c [3];
  undefined4 local_40;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  CHAR local_30 [48];
  
  FUN_0046f790((char *)(param_1 + 2),local_4c);
  local_40 = FUN_0046f8e0(local_4c[0],1);
  local_3c = (undefined2)local_4c[0];
  local_3a = (undefined2)(local_4c[0] >> 0x10);
  local_38 = (undefined1)local_4c[1];
  local_37 = (undefined1)(local_4c[1] >> 8);
  local_36 = (undefined1)(local_4c[1] >> 0x10);
  local_35 = (undefined1)(local_4c[1] >> 0x18);
  local_34 = (undefined1)local_4c[2];
  local_33 = (undefined1)(local_4c[2] >> 8);
  local_32 = (undefined1)(local_4c[2] >> 0x10);
  local_31 = (undefined1)(local_4c[2] >> 0x18);
  FUN_00470c70(&local_40,local_30,0x2d);
  wsprintfA(param_2,"{%s}",local_30);
  return 0;
}


