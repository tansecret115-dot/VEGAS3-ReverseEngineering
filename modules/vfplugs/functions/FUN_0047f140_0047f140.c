/* Module: vfplugs.dll
   Function: FUN_0047f140
   Address: 0047f140
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0047f140(char *param_1,LPSTR param_2,int param_3)

{
  int iVar1;
  uint local_6c;
  uint local_68;
  uint local_64;
  undefined4 local_60;
  ushort uStack_5c;
  undefined2 local_5a;
  ushort uStack_58;
  ushort local_56;
  ushort uStack_54;
  ushort local_52;
  CHAR local_4c [28];
  char local_30 [48];
  
  sscanf(param_1,"{%36s}",local_30);
  iVar1 = FUN_0047efd0(local_30,&local_60);
  if (-1 < iVar1) {
    local_6c = CONCAT22(uStack_58,local_5a) << 0x10 | (uint)uStack_5c;
    local_68 = (local_56 & 0xff00 | local_56 & 0xff) << 0x10 | uStack_58 & 0xff00 | uStack_58 & 0xff
    ;
    local_64 = ((uint)(local_52 >> 8) << 8 | local_52 & 0xff) << 0x10 | uStack_54 & 0xff00 |
               uStack_54 & 0xff;
    FUN_0047d750((int)&local_6c,local_4c);
    lstrcpynA(param_2,local_4c,param_3);
    param_2[param_3 + -1] = '\0';
    return iVar1;
  }
  *param_2 = '\0';
  return -0x7ff8ffa9;
}


