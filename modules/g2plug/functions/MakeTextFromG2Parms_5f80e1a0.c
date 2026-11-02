/* Module: g2plug.dll
   Function: MakeTextFromG2Parms
   Address: 5f80e1a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall MakeTextFromG2Parms(struct SFG2_PARAMS *,char *,int) */

void MakeTextFromG2Parms(SFG2_PARAMS *param_1,char *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int local_10c;
  int local_104;
  uchar local_100 [256];
  
                    /* 0xe1a0  13  ?MakeTextFromG2Parms@@YGXPAUSFG2_PARAMS@@PADH@Z */
  FUN_5f8172d0(DAT_5f87746c,0x19e,(LPSTR)local_100,0x100);
  _mbsnbcpy((uchar *)param_2,local_100,param_3);
  _mbsnbcat((uchar *)param_2,"\t",param_3);
  _mbsnbcat((uchar *)param_2,"\t",param_3);
  if (*(int *)(param_1 + 0x13c) == 3) {
    uVar1 = 0xef93;
  }
  else {
    uVar1 = (*(int *)(param_1 + 0x13c) == 5) + 0xef91;
  }
  FUN_5f8172d0(DAT_5f87746c,uVar1,(LPSTR)local_100,0x100);
  _mbsnbcat((uchar *)param_2,local_100,param_3);
  _mbsnbcat((uchar *)param_2," ",param_3);
  FUN_5f8172d0(DAT_5f87746c,(*(int *)(param_1 + 0x14c) != 1) + 0xef94,(LPSTR)local_100,0x100);
  _mbsnbcat((uchar *)param_2,local_100,param_3);
  _mbsnbcat((uchar *)param_2,"\r\n",param_3);
  _mbsnbcat((uchar *)param_2,"\r\n",param_3);
  FUN_5f8172d0(DAT_5f87746c,0xef96,(LPSTR)local_100,0x100);
  _mbsnbcat((uchar *)param_2,local_100,param_3);
  _mbsnbcat((uchar *)param_2,"\t",param_3);
  uVar1 = *(uint *)(param_1 + 0x138);
  local_10c = 0;
  local_104 = 0;
  do {
    if ((uVar1 == 0) || (8 < local_10c)) goto LAB_5f80e386;
    if ((uVar1 & 1) != 0) {
      if (0 < local_104) {
        _mbsnbcat((uchar *)param_2,", ",param_3);
      }
      if (local_104 == 3) {
        _mbsnbcat((uchar *)param_2,"\r\n",param_3);
        _mbsnbcat((uchar *)param_2,"\t",param_3);
      }
      iVar2 = FUN_5f80c9f0(local_10c);
      FUN_5f8172d0(DAT_5f87746c,iVar2 + 0x37f,(LPSTR)local_100,0x100);
      _mbsnbcat((uchar *)param_2,local_100,param_3);
      if (*(int *)(param_1 + 0x14c) == 0) {
LAB_5f80e386:
        _mbsnbcat((uchar *)param_2,"\r\n",param_3);
        _mbsnbcat((uchar *)param_2,"\r\n",param_3);
        FUN_5f8172d0(DAT_5f87746c,0xef9f,(LPSTR)local_100,0x100);
        _mbsnbcat((uchar *)param_2,local_100,param_3);
        _mbsnbcat((uchar *)param_2,"\t",param_3);
        FUN_5f8172d0(DAT_5f87746c,0xef9e - (*(int *)(param_1 + 0x154) != 0),(LPSTR)local_100,0x100);
        _mbsnbcat((uchar *)param_2,local_100,param_3);
        _mbsnbcat((uchar *)param_2,"\r\n",param_3);
        FUN_5f8172d0(DAT_5f87746c,0xefa0,(LPSTR)local_100,0x100);
        _mbsnbcat((uchar *)param_2,local_100,param_3);
        _mbsnbcat((uchar *)param_2,"\t",param_3);
        FUN_5f8172d0(DAT_5f87746c,0xef9e - (*(int *)(param_1 + 0x15c) != 0),(LPSTR)local_100,0x100);
        _mbsnbcat((uchar *)param_2,local_100,param_3);
        _mbsnbcat((uchar *)param_2,"\r\n",param_3);
        FUN_5f8172d0(DAT_5f87746c,0xefa1,(LPSTR)local_100,0x100);
        _mbsnbcat((uchar *)param_2,local_100,param_3);
        _mbsnbcat((uchar *)param_2,"\t",param_3);
        FUN_5f8172d0(DAT_5f87746c,0xef9e - (*(int *)(param_1 + 0x158) != 0),(LPSTR)local_100,0x100);
        _mbsnbcat((uchar *)param_2,local_100,param_3);
        _mbsnbcat((uchar *)param_2,"\r\n",param_3);
        _mbsnbcat((uchar *)param_2,"\r\n",param_3);
        FUN_5f8172d0(DAT_5f87746c,0xef8e,(LPSTR)local_100,0x100);
        _mbsnbcat((uchar *)param_2,local_100,param_3);
        _mbsnbcat((uchar *)param_2," ",param_3);
        if (*(int *)(param_1 + 0x128) == 0) {
          FUN_5f8172d0(DAT_5f87746c,0xef8f,(LPSTR)local_100,0x100);
          _mbsnbcat((uchar *)param_2,local_100,param_3);
          _mbsnbcat((uchar *)param_2,"\r\n",param_3);
        }
        else {
          FUN_5f8172d0(DAT_5f87746c,0xefa2,(LPSTR)local_100,0x100);
          _mbsnbcat((uchar *)param_2,local_100,param_3);
          _mbsnbcat((uchar *)param_2,":",param_3);
          _mbsnbcat((uchar *)param_2,"\t",param_3);
          iVar2 = *(int *)(param_1 + 0x140);
          if (iVar2 == 0) {
            uVar1 = 0xefa3;
          }
          else if (iVar2 == 1) {
            uVar1 = 0xefa4;
          }
          else {
            uVar1 = (iVar2 != 2) + 0xefa5;
          }
          FUN_5f8172d0(DAT_5f87746c,uVar1,(LPSTR)local_100,0x100);
          _mbsnbcat((uchar *)param_2,local_100,param_3);
          _mbsnbcat((uchar *)param_2,"\r\n",param_3);
          if (*(int *)(param_1 + 0x144) != 0) {
            FUN_5f8172d0(DAT_5f87746c,0xefd7,(LPSTR)local_100,0x100);
            _mbsnbcat((uchar *)param_2,local_100,param_3);
            _mbsnbcat((uchar *)param_2,"\t",param_3);
            FUN_5f825e30(local_100,"$d");
            _mbsnbcat((uchar *)param_2,local_100,param_3);
            _mbsnbcat((uchar *)param_2,"\r\n",param_3);
          }
        }
        FUN_5f8172d0(DAT_5f87746c,0xef8d,(LPSTR)local_100,0x100);
        _mbsnbcat((uchar *)param_2,local_100,param_3);
        _mbsnbcat((uchar *)param_2," ",param_3);
        if (*(int *)(param_1 + 300) == 0) {
          FUN_5f8172d0(DAT_5f87746c,0xef8f,(LPSTR)local_100,0x100);
          _mbsnbcat((uchar *)param_2,local_100,param_3);
          _mbsnbcat((uchar *)param_2,"\r\n",param_3);
        }
        else {
          FUN_5f8172d0(DAT_5f87746c,0xefa2,(LPSTR)local_100,0x100);
          _mbsnbcat((uchar *)param_2,local_100,param_3);
          _mbsnbcat((uchar *)param_2,":",param_3);
          _mbsnbcat((uchar *)param_2,"\t",param_3);
          iVar2 = *(int *)(param_1 + 0x148);
          if (iVar2 == 0) {
            uVar1 = 0xefa7;
          }
          else if (iVar2 == 1) {
            uVar1 = 0xefa8;
          }
          else {
            uVar1 = (iVar2 != 2) + 0xefa9;
          }
          FUN_5f8172d0(DAT_5f87746c,uVar1,(LPSTR)local_100,0x100);
          _mbsnbcat((uchar *)param_2,local_100,param_3);
        }
        if (*(int *)(param_1 + 300) != 0) {
          if (*(int *)(param_1 + 0x14c) == 1) {
            _mbsnbcat((uchar *)param_2,"\r\n",param_3);
            FUN_5f8172d0(DAT_5f87746c,0xefcc - (*(int *)(param_1 + 0x150) != 0),(LPSTR)local_100,
                         0x100);
            _mbsnbcat((uchar *)param_2,local_100,param_3);
            _mbsnbcat((uchar *)param_2,"\r\n",param_3);
          }
          _mbsnbcat((uchar *)param_2,"\r\n",param_3);
          FUN_5f8172d0(DAT_5f87746c,0xefd5,(LPSTR)local_100,0x100);
          _mbsnbcat((uchar *)param_2,local_100,param_3);
          _mbsnbcat((uchar *)param_2,"\t",param_3);
          uVar1 = FUN_5f80e860(*(int *)(param_1 + 0x3df),*(uint *)(param_1 + 0x3e3));
          FUN_5f8172d0(DAT_5f87746c,uVar1,(LPSTR)local_100,0x100);
          _mbsnbcat((uchar *)param_2,local_100,param_3);
          if (uVar1 == 0xefd4) {
            _mbsnbcat((uchar *)param_2," ",param_3);
            wsprintfA((LPSTR)local_100,"(%dx%d)",*(undefined4 *)(param_1 + 999),
                      *(undefined4 *)(param_1 + 0x3eb));
            _mbsnbcat((uchar *)param_2,local_100,param_3);
          }
        }
        return;
      }
      local_104 = local_104 + 1;
    }
    uVar1 = (int)uVar1 >> 1;
    local_10c = local_10c + 1;
  } while( true );
}


