/* Module: aviplug.dll
   Function: FUN_5f98b080
   Address: 5f98b080
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */

int FUN_5f98b080(undefined4 param_1,int *param_2)

{
  HANDLE hFile;
  int iVar1;
  BOOL BVar2;
  DWORD DVar3;
  int *piVar4;
  int *piStack_88;
  int iStack_84;
  DWORD DStack_80;
  int iStack_7c;
  int iStack_78;
  undefined4 local_64 [2];
  int iStack_5c;
  int aiStack_58 [6];
  undefined1 auStack_40 [20];
  int iStack_2c;
  int iStack_28;
  HANDLE pvStack_20;
  DWORD aDStack_1c [2];
  undefined4 *puStack_14;
  
  local_64[0] = 0;
  if (param_2 != (int *)0x0) {
    iStack_78 = 0;
    iStack_7c = 0;
    DStack_80 = 0;
    iStack_84 = 0;
    piStack_88 = param_2;
    (**(code **)(*param_2 + 0x14))();
    iVar1 = (**(code **)(*param_2 + 0xc))(param_2,aiStack_58 + 1,0xc,local_64);
    hFile = pvStack_20;
    if ((iVar1 == 0) && (iStack_5c != 0)) {
      SetFilePointer(pvStack_20,4,(PLONG)0x0,0);
      BVar2 = ReadFile(pvStack_20,&iStack_7c,4,&DStack_80,(LPOVERLAPPED)0x0);
      if (BVar2 == 0) {
        return -0x7ffb1ff8;
      }
      if (DStack_80 != 4) {
        return -0x7ffb1ff8;
      }
      SetFilePointer(pvStack_20,iStack_7c + 8,(PLONG)0x0,0);
      iVar1 = FUN_5f98e5d0(pvStack_20);
      if (iVar1 < 0) {
        return iVar1;
      }
      DVar3 = SetFilePointer(pvStack_20,0,(PLONG)0x0,1);
      iStack_78 = iStack_5c;
      BVar2 = WriteFile(pvStack_20,&iStack_78,4,aDStack_1c,(LPOVERLAPPED)0x0);
      if (BVar2 == 0) {
        return -0x7ffb1ff7;
      }
      piStack_88 = (int *)((int)piStack_88 + aDStack_1c[0]);
      pvStack_20 = (HANDLE)0x0;
      if (0 < iStack_5c) {
        do {
          if (iVar1 < 0) break;
          iStack_84 = (**(code **)(*param_2 + 0xc))(param_2,auStack_40,0x1c,&stack0xffffff8c);
          if (iStack_84 == 0) {
            piVar4 = aiStack_58;
            for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
              *piVar4 = 0;
              piVar4 = piVar4 + 1;
            }
            aiStack_58[0] = (int)pvStack_20 + 1;
            aiStack_58[1] = ftol();
            aiStack_58[2] = 0x61746164;
            aiStack_58[3] = 0;
            aiStack_58[4] = 0;
            aiStack_58[5] = aiStack_58[1];
            BVar2 = WriteFile(hFile,aiStack_58,0x18,aDStack_1c,(LPOVERLAPPED)0x0);
            if (BVar2 == 0) {
              return -0x7ffb1ff7;
            }
            piStack_88 = (int *)((int)piStack_88 + aDStack_1c[0]);
            if (iStack_2c != 0) {
              *puStack_14 = 1;
            }
            if (iStack_28 != 0) {
              *puStack_14 = 1;
              (**(code **)(*param_2 + 0x14))(param_2,iStack_28,0,1,0);
            }
          }
          pvStack_20 = (HANDLE)((int)pvStack_20 + 1);
          iVar1 = iStack_84;
        } while ((int)pvStack_20 < iStack_5c);
      }
      SetFilePointer(hFile,DVar3 - 4,(PLONG)0x0,0);
      BVar2 = WriteFile(hFile,&piStack_88,4,aDStack_1c,(LPOVERLAPPED)0x0);
      if (BVar2 == 0) {
        return -0x7ffb1ff7;
      }
      piStack_88 = piStack_88 + 2;
      FUN_5f98e4f0(hFile,(int)piStack_88);
      return iVar1;
    }
  }
  return 0;
}


