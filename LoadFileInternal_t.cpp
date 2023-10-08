// _BYTE *a3 = Local<Script>* outScript
// _BYTE *outScript = Local<Script>* outScript
// Stream = fwRefContainer<vfs::Stream> or OMPtr<fxIStream>
void __fastcall V8ScriptRuntime_181C0(Stream *stream, char *scriptFile, _BYTE *outScript)
{
  char *v4; // rdi
  Stream *v5; // r13
  void *v6; // rcx
  unsigned __int64 v7; // r12
  size_t v8; // rbx
  _BYTE *v9; // rax
  _BYTE *v10; // rax
  unsigned __int64 v11; // rsi
  struct fx::ResourceManager *Current; // rdi
  void (__fastcall *v13)(struct fx::ResourceManager *, char **, void **, __int64); // rbx
  __int64 v14; // r9
  void *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rcx
  char v19; // al
  char *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rcx
  unsigned __int64 v24; // r8
  void **v25; // r9
  _QWORD *v26; // rsi
  const char *v27; // rbx
  __int64 v28; // r10
  void *v29; // rcx
  void *v30; // rcx
  void **v31; // rdx
  char *v32; // rbx
  unsigned __int64 v33; // rdi
  __int64 v34; // r9
  unsigned __int64 i; // rcx
  void **v36; // r14
  char *v37; // rax
  __int64 v38; // r13
  __int64 v39; // r14
  __int64 v40; // rax
  int v41; // eax
  int *v42; // rdi
  __int64 v43; // r12
  __int64 v44; // rcx
  __int64 v45; // rbx
  int v46; // eax
  __int64 v47; // rcx
  __int64 v48; // rcx
  _BYTE *v49; // rcx
  int v50; // eax
  char *v51; // r12
  int *v52; // rsi
  __int64 v53; // rbx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rbx
  void (__fastcall *v58)(__int64, _QWORD, _QWORD *); // rdi
  _QWORD *v59; // rax
  void *v60; // rcx
  char *v61; // rax
  void *v62; // rcx
  void *v63; // rcx
  char *v64; // rbx
  __int64 v65; // rax
  __int64 v66; // rdx
  char v67[8]; // [rsp+30h] [rbp-238h] BYREF
  void **v68; // [rsp+38h] [rbp-230h] BYREF
  char *v69; // [rsp+40h] [rbp-228h] BYREF
  __int64 v70; // [rsp+48h] [rbp-220h] BYREF
  void *v71[2]; // [rsp+50h] [rbp-218h] BYREF
  void *v72; // [rsp+60h] [rbp-208h]
  _BYTE *v73; // [rsp+68h] [rbp-200h] BYREF
  char *v74; // [rsp+70h] [rbp-1F8h] BYREF
  int v75; // [rsp+78h] [rbp-1F0h]
  Stream *v76; // [rsp+80h] [rbp-1E8h]
  __int128 v77; // [rsp+90h] [rbp-1D8h] BYREF
  __int64 v78; // [rsp+A0h] [rbp-1C8h] BYREF
  void *v79[2]; // [rsp+A8h] [rbp-1C0h] BYREF
  __int64 v80; // [rsp+B8h] [rbp-1B0h]
  char *v81; // [rsp+C0h] [rbp-1A8h]
  __int128 v82; // [rsp+C8h] [rbp-1A0h] BYREF
  __int64 v83; // [rsp+D8h] [rbp-190h]
  __int128 outScript_1; // [rsp+E0h] [rbp-188h]
  char pExceptionObject[64]; // [rsp+F0h] [rbp-178h] BYREF
  void *Block[2]; // [rsp+130h] [rbp-138h] BYREF
  __m128i si128; // [rsp+140h] [rbp-128h]
  void *Src[2]; // [rsp+150h] [rbp-118h] BYREF
  __int64 v89; // [rsp+160h] [rbp-108h]
  unsigned __int64 v90; // [rsp+168h] [rbp-100h]
  __int128 v91[3]; // [rsp+170h] [rbp-F8h] BYREF
  char v92[128]; // [rsp+1A0h] [rbp-C8h] BYREF

  v83 = 0xFFFFFFFFFFFFFFFEui64;
  v4 = scriptFile;
  v74 = scriptFile;
  v5 = stream;
  v76 = stream;
  v81 = scriptFile;
  v75 = 0;
  if ( (*(int (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)scriptFile + 0x30i64))(*(_QWORD *)scriptFile, &v78) < 0 )
  {
    if ( *(_QWORD *)v4 )
    {
      if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)v4 + 0x10i64))(*(_QWORD *)v4) )
        *(_QWORD *)v4 = 0i64;
    }
    return;
  }
  sub_1C990(v71, v78);
  if ( (*(int (__fastcall **)(_QWORD, void *, _QWORD, _QWORD))(**(_QWORD **)v4 + 0x18i64))(
         *(_QWORD *)v4,
         v71[0],
         (unsigned int)v78,
         0i64) < 0 )
  {
    v6 = v71[0];
    if ( !v71[0] )
    {
LABEL_11:
      if ( *(_QWORD *)v4 && (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)v4 + 0x10i64))(*(_QWORD *)v4) )
        *(_QWORD *)v4 = 0i64;
      return;
    }
    if ( (unsigned __int64)v72 - (unsigned __int64)v71[0] < 0x1000
      || (v6 = (void *)*((_QWORD *)v71[0] + 0xFFFFFFFF), (unsigned __int64)(v71[0] - v6 - 8) <= 0x1F) )
    {
      j_j_free(v6);
      *(_OWORD *)v71 = 0i64;
      v72 = 0i64;
      goto LABEL_11;
    }
LABEL_132:
    invalid_parameter_noinfo_noreturn();
  }
  v7 = 0xFFFFFFFFFFFFFFFFui64;
  v8 = 0xFFFFFFFFFFFFFFFFui64;
  do
    ++v8;
  while ( outScript[v8] );
  if ( v8 > 1 && *outScript == 0x40 )
  {
    v9 = memchr(outScript, 0x2F, v8);
    if ( v9 )
    {
      if ( v9 - outScript != 0xFFFFFFFFFFFFFFFFui64 )
      {
        v10 = memchr(outScript, 0x2F, v8);
        if ( v10 )
          v11 = v10 - outScript;
        else
          v11 = 0xFFFFFFFFFFFFFFFFui64;
        if ( v8 - 1 < v11 - 1 )
          v11 = v8;
        if ( v8 < v11 + 1 )
          sub_1EC40();
        Current = fx::ResourceManager::GetCurrent(1);
        v13 = *(void (__fastcall **)(struct fx::ResourceManager *, char **, void **, __int64))(*(_QWORD *)Current
                                                                                             + 0x30i64);
        *(_OWORD *)Block = 0i64;
        si128 = 0i64;
        sub_D530(Block, outScript + 1, v11 - 1);
        LOBYTE(v14) = 1;
        v13(Current, &v69, Block, v14);
        if ( si128.m128i_i64[1] >= 0x10ui64 )
        {
          v15 = Block[0];
          if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
          {
            v15 = (void *)*((_QWORD *)Block[0] + 0xFFFFFFFF);
            if ( (unsigned __int64)(Block[0] - v15 - 8) > 0x1F )
              invalid_parameter_noinfo_noreturn();
          }
          j_j_free(v15);
        }
        si128 = _mm_load_si128((const __m128i *)&xmmword_A7D90);
        LOBYTE(Block[0]) = 0;
        if ( v69 )
        {
          v16 = *((_QWORD *)v69 + 8);
          if ( v16 )
          {
            while ( 1 )
            {
              v17 = *(_QWORD *)(v16 + 0x40);
              v68 = v71;
              v18 = *(_QWORD *)(v16 + 0x38);
              if ( !v18 )
                break;
              if ( (*(unsigned __int8 (__fastcall **)(__int64, void ***))(*(_QWORD *)v18 + 0x10i64))(v18, &v68) )
              {
                v16 = v17;
                if ( v17 )
                  continue;
              }
              goto LABEL_36;
            }
            std::_Xbad_function_call();
LABEL_48:
            std::_Xbad_function_call();
            __debugbreak();
          }
        }
LABEL_36:
        if ( v69 )
        {
          v19 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v69 + 0x10i64))(v69);
          v20 = v69;
          if ( v19 )
            v20 = 0i64;
          v69 = v20;
        }
        v5 = v76;
        v4 = v74;
      }
    }
  }
  v21 = *(_QWORD *)((*(__int64 (__fastcall **)(Stream *))(*(_QWORD *)v5 + 0x28i64))(v5) + 0x40);
  if ( v21 )
  {
    while ( 1 )
    {
      v22 = *(_QWORD *)(v21 + 0x40);
      v68 = v71;
      v23 = *(_QWORD *)(v21 + 0x38);
      if ( !v23 )
        goto LABEL_48;
      if ( (*(unsigned __int8 (__fastcall **)(__int64, void ***))(*(_QWORD *)v23 + 0x10i64))(v23, &v68) )
      {
        v21 = v22;
        if ( v22 )
          continue;
      }
      break;
    }
  }
  v78 = v71[1] - v71[0];
  v67[0] = 0;
  if ( v71[1] == v72 )
    sub_25C20(v71, v71[1], v67);
  else
    *(_BYTE *)v71[1]++ = 0;
  *(_OWORD *)Src = 0i64;
  v89 = 1i64;
  v90 = 0xFi64;
  LOWORD(Src[0]) = 0x40;
  v24 = 0xFFFFFFFFFFFFFFFFui64;
  do
    ++v24;
  while ( outScript[v24] );
  sub_292D0(Src);
  v25 = Src;
  if ( v90 >= 0x10 )
    LODWORD(v25) = Src[0];
  v26 = (_QWORD *)((char *)v5 + 0x58);
  v68 = (void **)((char *)v5 + 0x58);
  if ( (unsigned int)luaL_loadbuffer_2B260(*((_QWORD *)v5 + 0xB), v71[0], v78, (_DWORD)v25, 0i64) )
  {
    v27 = "error object is not a string";
    if ( (unsigned int)sub_2D3D0(*v26, 0xFFFFFFFFi64) == 8 )
      v27 = (const char *)sub_2DCD0(v28, 0xFFFFFFFFi64, 0i64);
    v74 = (char *)&unk_9D02E;
    (*(void (__fastcall **)(_QWORD, char **))(**((_QWORD **)v5 + 0xF) + 0x18i64))(*((_QWORD *)v5 + 0xF), &v74);
    v73 = outScript;
    *(_QWORD *)&outScript_1 = outScript;
    v76 = (Stream *)v74;
    v79[0] = v74;
    v69 = (char *)v27;
    *(_QWORD *)&v82 = v27;
    v91[0] = outScript_1;
    v91[1] = *(_OWORD *)v79;
    v91[2] = v82;
    *(_QWORD *)&v77 = 0xCCCi64;
    *((_QWORD *)&v77 + 1) = v91;
    *(_OWORD *)Block = v77;
    ScriptTrace_128C0("Error parsing script %s in resource %s: %s\n", Block);// ScriptTrace("Error parsing script %s in resource %s: %s\n", scriptFile, GetResourceName(), *str);
    *(_QWORD *)(*v26 + 0x10i64) -= 0x20i64;
    if ( v90 < 0x10 )
      goto LABEL_61;
    v29 = Src[0];
    if ( v90 + 1 < 0x1000
      || (v29 = (void *)*((_QWORD *)Src[0] + 0xFFFFFFFF), (unsigned __int64)(Src[0] - v29 - 8) <= 0x1F) )
    {
      j_j_free(v29);
LABEL_61:
      v89 = 0i64;
      v90 = 0xFi64;
      LOBYTE(Src[0]) = 0;
      v30 = v71[0];
      if ( v71[0] )
      {
        if ( (unsigned __int64)v72 - (unsigned __int64)v71[0] >= 0x1000 )
        {
          v30 = (void *)*((_QWORD *)v71[0] + 0xFFFFFFFF);
          if ( (unsigned __int64)(v71[0] - v30 - 8) > 0x1F )
            goto LABEL_132;
        }
        j_j_free(v30);
        *(_OWORD *)v71 = 0i64;
        v72 = 0i64;
      }
      if ( *(_QWORD *)v4 && (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)v4 + 0x10i64))(*(_QWORD *)v4) )
        *(_QWORD *)v4 = 0i64;
      return;
    }
LABEL_127:
    invalid_parameter_noinfo_noreturn();
  }
  if ( *((_QWORD *)v5 + 0x11) )
  {
    *(_OWORD *)Block = 0i64;
    si128 = 0ui64;
    do
      ++v7;
    while ( outScript[v7] );
    sub_D530(Block, outScript, v7);
    v31 = Block;
    v32 = (char *)Block[0];
    v33 = si128.m128i_u64[1];
    if ( si128.m128i_i64[1] >= 0x10ui64 )
      v31 = (void **)Block[0];
    v34 = 0xCBF29CE484222325ui64;
    for ( i = 0i64; i < si128.m128i_i64[0]; ++i )
      v34 = 0x100000001B3i64 * (*((unsigned __int8 *)v31 + i) ^ (unsigned __int64)v34);
    v36 = *(void ***)(sub_25A40((char *)v5 + 0xE88, &v82, Block, v34) + 8);
    v68 = v36;
    if ( !v36 )
    {
      v36 = (void **)*((_QWORD *)v5 + 0x1D2);
      v68 = v36;
    }
    if ( v33 >= 0x10 )
    {
      v37 = v32;
      if ( v33 + 1 >= 0x1000 )
      {
        v32 = (char *)*((_QWORD *)v32 + 0xFFFFFFFF);
        if ( (unsigned __int64)(v37 - v32 - 8) > 0x1F )
LABEL_122:
          invalid_parameter_noinfo_noreturn();
      }
      j_j_free(v32);
    }
    si128.m128i_i64[0] = 0i64;
    si128.m128i_i64[1] = 0xFi64;
    LOBYTE(Block[0]) = 0;
    v38 = (__int64)v76;
    if ( v36 != *((void ***)v76 + 0x1D2) )
    {
      *(_OWORD *)v79 = 0i64;
      v39 = 0i64;
      v80 = 0i64;
      v40 = *(_QWORD *)(*v26 + 0x10i64);
      if ( *(_DWORD *)(v40 - 0x10) == 0x4A )
        v41 = sub_2D1F0(*v26, *(_QWORD *)(*(_QWORD *)(v40 - 0x20) + 0x18i64));
      else
        v41 = 0;
      v42 = (int *)v79[1];
      if ( v41 > 0 )
      {
        v43 = (unsigned int)v41;
        do
        {
          lua_getinfo_62690(*v26, ">L", v92);
          v44 = *v26;
          *(_DWORD *)(*(_QWORD *)(*v26 + 0x10i64) + 0x10i64) = 0;
          *(_QWORD *)(v44 + 0x10) += 0x20i64;
          while ( 1 )
          {
            v45 = *v26;
            v46 = sub_6BC40(
                    *v26,
                    *(_QWORD *)(*(_QWORD *)(*v26 + 0x10i64) - 0x40i64),
                    *(_QWORD *)(*v26 + 0x10i64) - 0x20i64);
            v47 = *(_QWORD *)(v45 + 0x10);
            if ( !v46 )
              break;
            *(_QWORD *)(v45 + 0x10) = v47 + 0x20;
            v48 = *(_QWORD *)(*v26 + 0x10i64) - 0x40i64;
            if ( *(_DWORD *)(v48 + 0x10) == 0x13 )
            {
              v49 = *(_BYTE **)v48;
            }
            else
            {
              v50 = sub_70CA0(v48, &v73, 0i64);
              v49 = v73;
              if ( !v50 )
                v49 = 0i64;
            }
            v73 = v49;
            LODWORD(v69) = (_DWORD)v49 - 1;
            if ( v42 == (int *)v39 )
            {
              sub_256B0(v79, v42, &v69);
              v39 = v80;
              v42 = (int *)v79[1];
            }
            else
            {
              *v42++ = (_DWORD)v49 - 1;
              v79[1] = v42;
            }
            *(_QWORD *)(*v26 + 0x10i64) -= 0x20i64;
          }
          *(_QWORD *)(v45 + 0x10) = v47 - 0x20;
          *(_QWORD *)(*v26 + 0x10i64) -= 0x20i64;
          --v43;
        }
        while ( v43 );
      }
      if ( *(_QWORD *)(v38 + 0x88) )
      {
        *(_OWORD *)Block = 0i64;
        sub_1DF40(&v77, Block);
        v75 = 1;
        v51 = (char *)v79[0];
        v52 = (int *)v79[0];
        if ( v79[0] != v42 )
        {
          do
          {
            LOBYTE(v69) = 0;
            v70 = 0i64;
            v53 = *v52;
            sub_1D830(&v70, 0i64);
            LOBYTE(v69) = 5;
            v70 = v53;
            if ( (_BYTE)v77 )
            {
              if ( (_BYTE)v77 != 2 )
              {
                v68 = (void **)sub_1DEB0(&v77);
                v65 = sub_20E90(Block);
                sub_20F40(pExceptionObject, v66, v65);
                CxxThrowException(pExceptionObject, (_ThrowInfo *)&stru_BD760);
              }
              v55 = *((_QWORD *)&v77 + 1);
            }
            else
            {
              LOBYTE(v77) = 2;
              LOBYTE(v54) = 2;
              sub_1DCD0(&v73, v54);
              v55 = (__int64)v73;
              *((_QWORD *)&v77 + 1) = v73;
            }
            v56 = *(_QWORD *)(v55 + 8);
            if ( v56 == *(_QWORD *)(v55 + 0x10) )
            {
              sub_25D80(v55, v56, &v69);
            }
            else
            {
              *(_BYTE *)v56 = (_BYTE)v69;
              *(_QWORD *)(v56 + 8) = v70;
              LOBYTE(v69) = 0;
              v70 = 0i64;
              *(_QWORD *)(v55 + 8) += 0x10i64;
            }
            sub_1D830(&v70, (unsigned __int8)v69);
            ++v52;
          }
          while ( v52 != v42 );
          v38 = (__int64)v76;
        }
        v57 = *(_QWORD *)(v38 + 0x88);
        v58 = *(void (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)v57 + 0x18i64);
        v59 = (_QWORD *)sub_1BDC0(&v77, Block);
        if ( v59[3] >= 0x10ui64 )
          v59 = (_QWORD *)*v59;
        v58(v57, *((unsigned int *)v68 + 0xC), v59);
        if ( si128.m128i_i64[1] >= 0x10ui64 )
        {
          v60 = Block[0];
          if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
          {
            v60 = (void *)*((_QWORD *)Block[0] + 0xFFFFFFFF);
            if ( (unsigned __int64)(Block[0] - v60 - 8) > 0x1F )
              invalid_parameter_noinfo_noreturn();
          }
          j_j_free(v60);
        }
        si128 = _mm_load_si128((const __m128i *)&xmmword_A7D90);
        LOBYTE(Block[0]) = 0;
        v75 = 0;
        sub_1D830((char *)&v77 + 8, (unsigned __int8)v77);
      }
      else
      {
        v51 = (char *)v79[0];
      }
      if ( v51 )
      {
        v61 = v51;
        if ( (unsigned __int64)(4 * ((v39 - (__int64)v51) >> 2)) >= 0x1000 )
        {
          v51 = (char *)*((_QWORD *)v51 + 0xFFFFFFFF);
          if ( (unsigned __int64)(v61 - v51 - 8) > 0x1F )
            goto LABEL_122;
        }
        j_j_free(v51);
        *(_OWORD *)v79 = 0i64;
        v80 = 0i64;
      }
    }
  }
  if ( v90 >= 0x10 )
  {
    v62 = Src[0];
    if ( v90 + 1 >= 0x1000 )
    {
      v62 = (void *)*((_QWORD *)Src[0] + 0xFFFFFFFF);
      if ( (unsigned __int64)(Src[0] - v62 - 8) > 0x1F )
        goto LABEL_127;
    }
    j_j_free(v62);
  }
  v89 = 0i64;
  v90 = 0xFi64;
  LOBYTE(Src[0]) = 0;
  v63 = v71[0];
  if ( v71[0] )
  {
    if ( (unsigned __int64)v72 - (unsigned __int64)v71[0] >= 0x1000 )
    {
      v63 = (void *)*((_QWORD *)v71[0] + 0xFFFFFFFF);
      if ( (unsigned __int64)(v71[0] - v63 - 8) > 0x1F )
        goto LABEL_132;
    }
    j_j_free(v63);
    *(_OWORD *)v71 = 0i64;
    v72 = 0i64;
  }
  v64 = v74;
  if ( *(_QWORD *)v74 && (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)v74 + 0x10i64))(*(_QWORD *)v74) )
    *(_QWORD *)v64 = 0i64;
}
