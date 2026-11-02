/* Module: pngu3266.dll
   Function: LoadStandardBmp
   Address: 605f50a2
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNBitmapImage::LoadStandardBmp(unsigned long) */

int __thiscall CPNBitmapImage::LoadStandardBmp(CPNBitmapImage *this,ulong param_1)

{
  LPCSTR lpBitmapName;
  HBITMAP h;
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  
                    /* 0x50a2  1546  ?LoadStandardBmp@CPNBitmapImage@@UAEHK@Z */
  switch(param_1) {
  case 0:
    lpBitmapName = (LPCSTR)0x7ff2;
    break;
  case 1:
    lpBitmapName = (LPCSTR)0x7ff1;
    break;
  case 2:
    lpBitmapName = (LPCSTR)0x7ff0;
    break;
  case 3:
    lpBitmapName = (LPCSTR)0x7fef;
    break;
  case 4:
    lpBitmapName = (LPCSTR)0x7fee;
    break;
  case 5:
    lpBitmapName = (LPCSTR)0x7fed;
    break;
  case 6:
    lpBitmapName = (LPCSTR)0x7fec;
    break;
  case 7:
    lpBitmapName = (LPCSTR)0x7feb;
    break;
  case 8:
    lpBitmapName = (LPCSTR)0x7fea;
    break;
  case 9:
    lpBitmapName = (LPCSTR)0x7fe9;
    break;
  case 10:
    lpBitmapName = (LPCSTR)0x7fe8;
    break;
  case 0xb:
    lpBitmapName = (LPCSTR)0x7fe7;
    break;
  case 0xc:
    lpBitmapName = (LPCSTR)0x7fe6;
    break;
  case 0xd:
    lpBitmapName = (LPCSTR)0x7fe5;
    break;
  case 0xe:
    lpBitmapName = (LPCSTR)0x7fe4;
    break;
  case 0xf:
    lpBitmapName = (LPCSTR)0x7fe3;
    break;
  case 0x10:
    lpBitmapName = (LPCSTR)0x7fe2;
    break;
  case 0x11:
    lpBitmapName = (LPCSTR)0x7fe1;
    break;
  case 0x12:
    lpBitmapName = (LPCSTR)0x7fe0;
    break;
  case 0x13:
    lpBitmapName = (LPCSTR)0x7fdf;
    break;
  case 0x14:
    lpBitmapName = (LPCSTR)0x7fde;
    break;
  case 0x15:
    lpBitmapName = (LPCSTR)0x7fff;
    break;
  case 0x16:
    lpBitmapName = (LPCSTR)0x7ffe;
    break;
  case 0x17:
    lpBitmapName = (LPCSTR)0x7ffd;
    break;
  case 0x18:
    lpBitmapName = (LPCSTR)0x7ffc;
    break;
  case 0x19:
    lpBitmapName = (LPCSTR)0x7ffb;
    break;
  case 0x1a:
    lpBitmapName = (LPCSTR)0x7ffa;
    break;
  case 0x1b:
    lpBitmapName = (LPCSTR)0x7ff9;
    break;
  case 0x1c:
    lpBitmapName = (LPCSTR)0x7ff8;
    break;
  case 0x1d:
    lpBitmapName = (LPCSTR)0x7ff7;
    break;
  case 0x1e:
    lpBitmapName = (LPCSTR)0x7ff6;
    break;
  case 0x1f:
    lpBitmapName = (LPCSTR)0x7ff5;
    break;
  case 0x20:
    lpBitmapName = (LPCSTR)0x7ff4;
    break;
  default:
    lpBitmapName = (LPCSTR)0x0;
  }
  h = LoadBitmapA((HINSTANCE)0x0,lpBitmapName);
  *(HBITMAP *)(this + 0x14) = h;
  GetObjectA(h,0x18,local_1c);
  *(undefined4 *)(this + 0xc) = local_18;
  *(undefined4 *)(this + 0x10) = local_14;
  *(undefined4 *)(this + 0x20) = 1;
  if (*(int *)(this + 0x14) == 0) {
    *(undefined4 *)(this + 0x1c) = 0;
  }
  else {
    *(undefined4 *)(this + 0x1c) = 1;
  }
  return *(int *)(this + 0x1c);
}


