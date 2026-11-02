/* Module: vidcap30.exe
   Function: _SfViewGetFieldText@16
   Address: 004aacd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfViewGetFieldText_16(uchar *param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  byte bVar2;
  char *_Source;
  float fVar3;
  double *lpString2;
  char cVar4;
  uint iMaxLength;
  undefined8 local_10;
  
                    /* 0xaacd0  669  _SfViewGetFieldText@16 */
  lpString2 = (double *)(*(int *)(param_4 + 4) + param_3);
  *param_1 = '\0';
  cVar4 = (char)*(ushort *)(param_4 + 0xc);
  switch(*(ushort *)(param_4 + 0xc) & 0xff) {
  case 1:
    if (param_2 != 0) {
      iMaxLength = *(uint *)(param_4 + 8);
      if (param_2 <= *(uint *)(param_4 + 8)) {
        iMaxLength = param_2;
      }
      lstrcpynA((LPSTR)param_1,(LPCSTR)lpString2,iMaxLength);
      param_1[iMaxLength - 1] = '\0';
      param_1[param_2 - 1] = '\0';
      lstrlenA((LPCSTR)param_1);
      return;
    }
    break;
  case 2:
    iVar1 = *(int *)(param_4 + 8);
    fVar3 = 0.0;
    if (iVar1 == 1) {
      _SfLongToText_12((int)*(char *)lpString2,param_1,1);
      lstrlenA((LPCSTR)param_1);
      return;
    }
    if (iVar1 == 2) {
      _SfLongToText_12((int)*(short *)lpString2,param_1,1);
      lstrlenA((LPCSTR)param_1);
      return;
    }
    if (iVar1 == 4) {
      fVar3 = *(float *)lpString2;
    }
    _SfLongToText_12(fVar3,param_1,1);
    lstrlenA((LPCSTR)param_1);
    return;
  case 3:
    iVar1 = *(int *)(param_4 + 8);
    fVar3 = 0.0;
    if (iVar1 == 1) {
      _SfDWordToText_12(*(undefined1 *)lpString2,param_1,1);
      lstrlenA((LPCSTR)param_1);
      return;
    }
    if (iVar1 == 2) {
      _SfDWordToText_12(*(undefined2 *)lpString2,param_1,1);
      lstrlenA((LPCSTR)param_1);
      return;
    }
    if (iVar1 == 4) {
      fVar3 = *(float *)lpString2;
    }
    _SfDWordToText_12(fVar3,param_1,1);
    lstrlenA((LPCSTR)param_1);
    return;
  case 4:
    iVar1 = *(int *)(param_4 + 8);
    fVar3 = 0.0;
    if (iVar1 == 1) {
      fVar3 = (float)(uint)*(byte *)lpString2;
    }
    else if (iVar1 == 2) {
      fVar3 = (float)(uint)*(ushort *)lpString2;
    }
    else if (iVar1 == 4) {
      fVar3 = *(float *)lpString2;
    }
    wsprintfA((LPSTR)param_1,"%X",fVar3);
    lstrlenA((LPCSTR)param_1);
    return;
  case 5:
  case 0xc:
    iVar1 = *(int *)(param_4 + 8);
    fVar3 = 0.0;
    if (iVar1 == 1) {
      fVar3 = (float)(uint)*(byte *)lpString2;
    }
    else if (iVar1 == 2) {
      fVar3 = (float)(uint)*(ushort *)lpString2;
    }
    else if (iVar1 == 4) {
      fVar3 = *(float *)lpString2;
    }
    if (cVar4 == '\f') {
      fVar3 = (float)(uint)(fVar3 == 0.0);
    }
    _Source = "TRUE";
    if (fVar3 != 0.0) goto LAB_004aaf1e;
    goto LAB_004aaf19;
  case 6:
  case 7:
    local_10 = 0.0;
    if (*(int *)(param_4 + 8) == 4) {
      local_10 = (double)*(float *)lpString2;
    }
    else if (*(int *)(param_4 + 8) == 8) {
      local_10 = *lpString2;
    }
    _SfDoubleToText_20(param_1,(undefined4)local_10,local_10._4_4_,8,1);
    lstrlenA((LPCSTR)param_1);
    return;
  case 8:
  case 0xd:
    bVar2 = '\x01' << ((byte)*(uint *)(param_4 + 8) & 7) &
            *(byte *)((*(uint *)(param_4 + 8) >> 3) + (int)lpString2);
    if (cVar4 == '\r') {
      bVar2 = bVar2 == 0;
    }
    _Source = "TRUE";
    if (bVar2 != 0) goto LAB_004aaf1e;
LAB_004aaf19:
    _Source = "FALSE";
LAB_004aaf1e:
    _mbscpy(param_1,(uchar *)_Source);
    lstrlenA((LPCSTR)param_1);
    return;
  case 9:
    _SfLongLongToText_16(*(float *)lpString2,*(float *)((int)lpString2 + 4),param_1,1);
    lstrlenA((LPCSTR)param_1);
    return;
  case 10:
    _SfDWordLongToText_16(*(float *)lpString2,*(float *)((int)lpString2 + 4),param_1,1);
    lstrlenA((LPCSTR)param_1);
    return;
  case 0xff:
    if (*(code **)(param_4 + 0x10) != (code *)0x0) {
      (**(code **)(param_4 + 0x10))(*(undefined4 *)(param_4 + 0x14),param_1,param_2,lpString2,0,0xd)
      ;
    }
  }
  lstrlenA((LPCSTR)param_1);
  return;
}


