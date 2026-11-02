/* Module: vegas30.exe
   Function: FUN_00537730
   Address: 00537730
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00537730(int param_1,int param_2,undefined4 param_3,uint param_4,short *param_5)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  short *psVar5;
  bool bVar6;
  CHAR aCStack_30c [259];
  undefined1 uStack_209;
  WCHAR local_208 [260];
  
  if (param_2 != 0) {
    iVar3 = 5;
    bVar6 = true;
    psVar5 = &DAT_0060f5d8;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar6 = *param_5 == *psVar5;
      param_5 = param_5 + 1;
      psVar5 = psVar5 + 1;
    } while (bVar6);
    if ((bVar6) && (uVar4 = 0, 0 < (int)param_4)) {
      do {
        iVar3 = (**(code **)(*DAT_0064b510 + 0x80))(DAT_0064b510,param_3,uVar4,local_208,0x104);
        if (-1 < iVar3) {
          if ((&stack0x00000000 == (undefined1 *)0x208) || (local_208[0] != L'\0')) {
            WideCharToMultiByte(0,0,local_208,-1,aCStack_30c,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
          }
          else if (&stack0x00000000 != (undefined1 *)0x30c) {
            aCStack_30c[0] = '\0';
          }
          uStack_209 = 0;
          iVar3 = lstrcmpiA(aCStack_30c,&DAT_0064b004);
          if (iVar3 == 0) {
            if (-1 < (int)uVar4) {
              return uVar4;
            }
            break;
          }
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < (int)param_4);
    }
  }
  uVar2 = 0;
  uVar4 = 0;
  if (param_4 != 0) {
    while( true ) {
      uVar2 = uVar4;
      bVar6 = true;
      bVar1 = true;
      if ((param_1 != 0) &&
         (iVar3 = (**(code **)(*DAT_0064b510 + 0x90))(DAT_0064b510,param_3,uVar2,8,0,0), iVar3 == 0)
         ) {
        bVar6 = false;
      }
      if ((param_2 != 0) &&
         (iVar3 = (**(code **)(*DAT_0064b510 + 0x90))(DAT_0064b510,param_3,uVar2,0x1f,0,0),
         iVar3 == 0)) {
        bVar1 = false;
      }
      if ((bVar6) && (bVar1)) break;
      uVar4 = uVar2 + 1;
      if (param_4 <= uVar2 + 1) {
        return 0;
      }
    }
  }
  return uVar2;
}


