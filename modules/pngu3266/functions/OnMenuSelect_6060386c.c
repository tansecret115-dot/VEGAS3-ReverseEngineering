/* Module: pngu3266.dll
   Function: OnMenuSelect
   Address: 6060386c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNCustomFrame::OnMenuSelect(class CPNEvent &) */

int __thiscall CPNCustomFrame::OnMenuSelect(CPNCustomFrame *this,CPNEvent *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  BYTE bVk;
  
                    /* 0x1386c  1647  ?OnMenuSelect@CPNCustomFrame@@UAEHAAVCPNEvent@@@Z */
  uVar3 = *(uint *)(param_1 + 0x1c) & 0xffff;
  uVar2 = *(uint *)(param_1 + 0x1c) >> 0x10;
  if ((((uVar3 == 0x4e21) && ((uVar2 & 0x80) != 0)) && (uVar2 != 0xffff)) && ((uVar2 & 0x8000) == 0)
     ) {
    iVar1 = *(int *)(this + 0x24);
    if ((iVar1 == 1) || (iVar1 == 0)) {
      keybd_event('\'','\0',0,0);
      bVk = '\'';
    }
    else {
      if (iVar1 != 3) goto LAB_606038de;
      keybd_event('%','\0',0,0);
      bVk = '%';
    }
    keybd_event(bVk,'\0',2,0);
  }
LAB_606038de:
  if ((uVar2 & 0x2000) == 0) {
    if (((uVar2 & 0x10) != 0) && (uVar3 != 0)) {
      *(undefined4 *)(this + 0x24) = 3;
    }
  }
  else if ((uVar2 & 0x10) != 0) {
    *(undefined4 *)(this + 0x24) = 1;
  }
  if (uVar2 == 0xffff) {
    *(undefined4 *)(this + 0x24) = 0;
  }
  return 0;
}


