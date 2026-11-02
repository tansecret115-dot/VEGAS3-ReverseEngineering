/* Module: mcplugrw.dll
   Function: FUN_004059f0
   Address: 004059f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004059f0(HWND param_1,int param_2)

{
  uchar *_Dest;
  int *this;
  HWND hWnd;
  int iVar1;
  int iVar2;
  LPCSTR lpCaption;
  LPCSTR lpText;
  uint uVar3;
  undefined4 uVar4;
  UINT uType;
  uint local_50;
  int local_4c;
  int local_48;
  int local_44;
  HKEY__ local_40 [16];
  
  hWnd = param_1;
  this = DAT_004a8128;
  uVar4 = 2;
  FUN_004055a0(param_1,(LPSTR)local_40,0x19);
  FUN_004142c0((int)this);
  iVar2 = FUN_00412e90(this,&local_4c,(uint *)&param_1,local_40,&local_50,(undefined4 *)0x0);
  iVar1 = param_2;
  if (iVar2 < 0x4e130) {
    if (0x4e12d < iVar2) {
      _Dest = (uchar *)(param_2 + 0x10b);
      _mbscpy(_Dest,(uchar *)local_40);
      iVar2 = FUN_00411eb0(this,_Dest);
      if (-1 < iVar2) {
        *(uint *)(iVar1 + 0x174) = local_50;
        *(HWND *)(iVar1 + 0x170) = param_1;
        *(int *)(iVar1 + 0x1dc) = local_4c;
        uVar4 = 1;
        FUN_00411740(this,0);
      }
      FUN_00412cf0(this,(HKEY)0x1,(HKEY)param_1);
      FUN_00412f90(this,&local_44,&local_48,1);
      return uVar4;
    }
    if ((-0x7ffb1eb3 < iVar2) && (iVar2 < -0x7ffb1eb0)) {
LAB_00405b27:
      iVar2 = FUN_00405370(param_2,(int)param_1,local_50);
      if (iVar2 == 0) {
        return 2;
      }
      _mbscpy((uchar *)(iVar1 + 0x10b),(uchar *)local_40);
      iVar2 = FUN_00411eb0(this,(uchar *)(iVar1 + 0x10b));
      if (-1 < iVar2) {
        *(uint *)(iVar1 + 0x170) = (uint)param_1 & 0xffff;
        uVar3 = FUN_00410900(this);
        uVar4 = 1;
        *(int *)(iVar1 + 0x1dc) = local_4c;
        *(uint *)(iVar1 + 0x174) = uVar3 & 0xffff;
        FUN_00411740(this,1);
      }
      FUN_00412cf0(this,(HKEY)0x1,(HKEY)param_1);
      FUN_00413180(this,param_1,param_1);
      FUN_00412f90(this,&local_44,&local_48,1);
      return uVar4;
    }
  }
  else if ((0x4e135 < iVar2) && (iVar2 < 0x4e138)) goto LAB_00405b27;
  uType = 0x30;
  lpCaption = FUN_0041f9f0(DAT_004a811c,0x2712);
  lpText = FUN_0041f9f0(DAT_004a811c,0x2711);
  MessageBoxA(hWnd,lpText,lpCaption,uType);
  return 2;
}


